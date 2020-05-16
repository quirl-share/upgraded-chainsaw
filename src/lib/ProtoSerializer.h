#pragma once

#include "conf/proto.pb.h"


template <class Message>
class Serializer;

template <>
class Serializer<av::msdf::Message>
{
public:
    static av::msdf::Message create();
    static size_t binary_encode(const av::msdf::Message& source, char* buffer, size_t capacity);
    static av::msdf::Message& binary_decode(const char* buffer, size_t size, av::msdf::Message& dst);
};

