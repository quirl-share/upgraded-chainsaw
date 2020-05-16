#pragma once

#include <array>
#include <lib/AvroAdsbExchangeEtl.h>
#include <lib/AvroPrinter.h>
#include "caf/all.hpp"
#include "actors/AvroPerformance.h"
#include "FileReader.h"
#include "lib/controls.h"
#include "Monitor.h"
#include "lib/ProtoSerializer.h"

using Message = av::msdf::Message;
//using Message = av::msdf_avro::Message;

void supervisor(caf::event_based_actor* self) {
    const std::string path = "../data/2019-11-01-0000Z.json";

    auto reader = self->system().spawn<FileReaderActor>();

    self->request(reader,  std::chrono::seconds(100), path)
        .then([&](std::vector<std::string> &json_objects) {
            auto start = std::chrono::steady_clock::now();

            std::for_each(json_objects.begin(), json_objects.end(), [&, self](const std::string &obj){
                ::Message msg = AdsbExchangeEtl<::Message>::transform(obj);
                std::array<char, 128> buffer{};
                auto size = Serializer<::Message>::binary_encode(msg, buffer.data(), 128);
                ::Message in;
                Serializer<::Message>::binary_decode(buffer.data(), size, in);
            });

            auto end = std::chrono::steady_clock::now();
            std::chrono::duration<double> elapsed_seconds = end-start;

            std::cout <<  "Loops: " << json_objects.size() << " Duration: " << elapsed_seconds.count();

        });
}
