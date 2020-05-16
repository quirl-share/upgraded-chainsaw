
#pragma once

#include <caf/all.hpp>
#include <lib/AvroSerializer.h>
#include "cpprest/json.h"
#include "../lib/controls.h"
#include "../lib/AvroAdsbExchangeEtl.h"

using namespace caf;
using namespace web;


class JsonToAvroActor : public event_based_actor {
public:
    JsonToAvroActor(actor_config& cfg) : event_based_actor(cfg) { }

    behavior make_behavior() override {
        return {
                [](const std::string &obj) {
                    avro::Message msg = AdsbExchangeEtl::transform(obj);
                    std::array<char, 128> buffer{};
                    auto size = AvroSerializer::binary_encode(msg, buffer.data(), 128);
                    return std::string{buffer.data()};
                }
        };
    }
};