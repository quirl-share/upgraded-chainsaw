#pragma once

#include <caf/all.hpp>
#include "cpprest/json.h"
#include "../lib/controls.h"

using namespace caf;
using namespace web;

behavior json_source_as_str(event_based_actor* self) {
    return {
            [=] (start, const std::string &filepath) {
                aout(self) << filepath << std::endl;
                std::ifstream       f(filepath);
                std::stringstream   s;
                json::value         v;
                if (f) {
                    s << f.rdbuf();
                    f.close();
                    v = json::value::parse(s);
                }
                json::array obj = v.as_object()[U("acList")].as_array();
                int n = 100;

                aout(self) << "here we go: " << n << std::endl;
                return attach_stream_source(
                        self,
                        [](int32_t& x) {
                            x = 0;
                        },
                        [&, self](int32_t& x, downstream<std::string>& out, size_t num) {
                            auto max_x = std::min(x + static_cast<int>(num), n);
                            for (; x < max_x; ++x) {
                                std::string res = utility::conversions::to_utf8string(obj.at(x).serialize());
                                out.push(res);
                            }
                        },
                        [n](const int32_t& x) {
                            return x == n;
                        });
            }
    };
}

//-------------------------------------------------------------------------------------------

behavior to_avro_string(event_based_actor* self) {
    return {
            [=](stream<std::string> in) {
                return attach_stream_stage(
                        self,
                        in,
                        [](unit_t&) {
                        },
                        [self](unit_t&, downstream<std::string>& out, std::string val) {
                            aout(self) << "to_avro_string:: " << val;
                            out.push(val);
                        },
                        [=](unit_t&, const error& err) {
                            if (err) {
                                aout(self) << "to_avro_string aborted with error: " << err << std::endl;
                            }
                            aout(self) << "to_avro_string finalized" << std::endl;
                        });
            },
    };
}

//-------------------------------------------------------------------------------------------

behavior avro_sink (event_based_actor* self) {
    return {
            [=](stream<std::string> in) {
                return attach_stream_sink(
                        self,
                        in,
                        [](std::vector<std::string>&) {
                        },
                        [](std::vector<std::string>& xs, std::string &val) { xs.emplace_back(val); },
                        [=](std::vector<std::string>& xs, const error& err) {
                            if (err) {
                                aout(self) << "avro_sink aborted with error: " << err << std::endl;
                            } else {
                                aout(self) << "avro_sink finalized after receiving: " << xs.size()
                                           << std::endl;
                            }
                        });
            }
    };
}

