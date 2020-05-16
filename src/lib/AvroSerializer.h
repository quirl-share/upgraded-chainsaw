
#pragma once

#include <avro/Compiler.hh>
#include "../messages/avro.hh"



template <class Message>
class Serializer;

template <>
class Serializer<av::msdf_avro::Message> {

    avro::ValidSchema loadSchema(const char* filename)
    {
        std::ifstream ifs(filename);
        avro::ValidSchema result;
        avro::compileJsonSchema(ifs, result);
        return result;
    }

public:
    static av::msdf_avro::Message create();
    static size_t binary_encode(const av::msdf_avro::Message &source, char* buffer, size_t capacity);
    static av::msdf_avro::Message& binary_decode(const char* buffer, size_t size, av::msdf_avro::Message& dst);


    static size_t json_encode(const av::msdf_avro::Message &source, char* buffer, size_t capacity);
    static av::msdf_avro::Message& json_decode(const char* buffer, size_t size, av::msdf_avro::Message& dst);
};

using AvroSerializer = Serializer<av::msdf_avro::Message>;

