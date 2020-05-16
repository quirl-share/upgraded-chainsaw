
#pragma once

#include <algorithm>
//#include <execution>

#include <caf/all.hpp>
#include "cpprest/json.h"
#include "../lib/controls.h"

using namespace caf;
using namespace web;

//-------------------------------------------------------------------------------------------

behavior parser_function(event_based_actor* self) {
    return {
            [&, self](const std::string &filepath) {
                std::ifstream       f(filepath);
                std::stringstream   s;
                json::value         v;
                if (f) {
                    s << f.rdbuf();
                    f.close();
                    v = json::value::parse(s);
                }
                auto tracks = v.as_object()[U("acList")].as_array();
                std::vector<std::string> vec;

                std::for_each(tracks.begin(), tracks.end(), [&vec](const json::value &val) {
                    std::string obj = utility::conversions::to_utf8string(val.serialize());
                    vec.push_back(obj);
                });
                return vec;
            }
    };
}

//-------------------------------------------------------------------------------------------

class FileReaderActor : public event_based_actor {
public:
    FileReaderActor(actor_config& cfg) : event_based_actor(cfg) {
        // nop
    }

    behavior make_behavior() override {
        return parser_function(this);
    }
};

