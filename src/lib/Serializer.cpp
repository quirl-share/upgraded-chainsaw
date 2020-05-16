//
// Created by andreas.eibler on 11.05.2020.
//

#include <fstream>
#include "Serializer.h"

#include "avro/Compiler.hh"

namespace {
}

//----------------------------------------------------------------------------

/* static */ avro::Message Serializer::create() {
    avro::Message msg;
    avro::Position position;
    {
        avro::PositionCartesian pc{};
        pc.x = 1.1;
        pc.y = 1.2;
        pc.var_x = 1.0;
        pc.var_y = 1.0;
        pc.cov_xy.set_double(1.0);
        position.cartesian.set_PositionCartesian(pc);
    }
    {
        avro::PositionPolar pp{};
        pp.rho = 2.1;
        pp.theta = 2.2;
        position.polar.set_PositionPolar(pp);
    }
    {
        avro::PositionWgs84 pw{};
        pw.lat = 3.1;
        pw.lon = 3.2;
        pw.var_lat.set_double(3.3);
        pw.var_lon.set_double(3.4);
        pw.cov_latlon.set_double(3.5);
        position.wgs84.set_PositionWgs84(pw);
    }
    msg.position.set_Position(position);
    return msg;
}

//----------------------------------------------------------------------------

/* static */ size_t Serializer::binary_encode(const avro::Message source, const char* buffer, size_t capacity) {

    std::unique_ptr<avro::OutputStream> out = avro::memoryOutputStream();
    avro::EncoderPtr encoder = avro::binaryEncoder();
    encoder->init(*out);
    avro::encode(*encoder, source);
    encoder->flush();

    auto input = avro::memoryInputStream(*out);
    avro::StreamReader reader (*input);
    size_t sz = out->byteCount();
    if (sz <= capacity)
    {
        reader.readBytes((uint8_t*)buffer, sz);
        return sz;
    }
    assert(sz <= capacity);
    return 0;
}

//----------------------------------------------------------------------------

/* static */ avro::Message& Serializer::binary_decode(const char* buffer, size_t size, avro::Message& dst)
{
    auto src = avro::memoryInputStream((const uint8_t*)buffer, size);
    avro::DecoderPtr e = avro::binaryDecoder();
    e->init(*src);
    avro::decode(*e, dst);
    return dst;
}