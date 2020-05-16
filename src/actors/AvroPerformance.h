
#pragma once

#include "caf/all.hpp"
#include "../messages/avro.hh"
#include "../lib/AvroSerializer.h"

caf::behavior avro_performance (caf::event_based_actor* self) {
    return [=](uint32_t loops) -> std::string {

        auto start = std::chrono::steady_clock::now();
        for (uint32_t i = 0; i < loops; ++i) {

            auto msg = AvroSerializer::create();
            char buffer[128];
            AvroSerializer::binary_encode(msg, buffer, 128);
            av::msdf_avro::Message in;
            AvroSerializer::binary_decode(buffer, 128, in);
            assert(msg.position.get_Position().cartesian.get_PositionCartesian().x
                    == in.position.get_Position().cartesian.get_PositionCartesian().x);

            assert(msg.position.get_Position().cartesian.get_PositionCartesian().y
                   == in.position.get_Position().cartesian.get_PositionCartesian().y);

            assert(msg.acceleration.is_null());
            assert(msg.altitude.is_null());
            assert(in.acceleration.is_null());
            assert(in.altitude.is_null());
        }
        auto end = std::chrono::steady_clock::now();
        std::chrono::duration<double> elapsed_seconds = end-start;
        aout(self) << "Looped for " << loops << " in " << elapsed_seconds.count() << " seconds." << std::endl;
        return std::to_string(elapsed_seconds.count());
    };
}
