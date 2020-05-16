//
// Created by andreas.eibler on 11.05.2020.
//

#pragma once

#include "../messages/avro.hh"

class Serializer {

public:
    static avro::Message create();
    static size_t binary_encode(const avro::Message source, const char* buffer, size_t capacity);
    static avro::Message& binary_decode(const char* buffer, size_t size, avro::Message& dst);
};

