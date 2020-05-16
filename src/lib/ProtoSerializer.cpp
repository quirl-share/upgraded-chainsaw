#include "ProtoSerializer.h"


#include <fstream>
#include "AvroSerializer.h"

#include "avro/Compiler.hh"

namespace {
}

//----------------------------------------------------------------------------

/* static */ av::msdf::Message Serializer<av::msdf::Message>::create() {
    av::msdf::Message msg;
    av::msdf::Position position;
    {
        av::msdf::PositionCartesian pc{};
        pc.set_x(1.1);
        pc.set_y(1.2);
        pc.set_var_x(1.0);
        pc.set_var_y(1.0);
        pc.mutable_cov_xy()->set_value(1.0);
        position.mutable_cartesian()->CopyFrom(pc);
    }
    {
        av::msdf::PositionPolar pp{};
        pp.set_rho (2.1);
        pp.set_theta(2.2);
        position.mutable_polar()->CopyFrom(pp);
    }
    {
        av::msdf::PositionWgs84 pw{};
        pw.set_lat(3.1);
        pw.set_lon(3.2);
        pw.mutable_var_lat()->set_value(3.3);
        pw.mutable_var_lon()->set_value(3.4);
        pw.mutable_cov_latlon()->set_value(3.5);
        position.mutable_wgs84()->CopyFrom(pw);
    }
    msg.mutable_position()->CopyFrom(position);
    return msg;
}

//----------------------------------------------------------------------------

/* static */ size_t Serializer<av::msdf::Message>::binary_encode(const av::msdf::Message& source, char* buffer, size_t capacity) {

    return source.SerializeToArray(buffer, capacity) ? source.GetCachedSize() : 0;
    return 0;
}

//----------------------------------------------------------------------------

/* static */ av::msdf::Message& Serializer<av::msdf::Message>::binary_decode(const char* buffer, size_t size, av::msdf::Message& dst)
{
    bool ok = dst.ParseFromArray(buffer, size);
    assert(ok|| "Could not parse message");
    /*auto src = av::msdf::memoryInputStream((const uint8_t*)buffer, size);
    av::msdf::DecoderPtr e = av::msdf::binaryDecoder();
    e->init(*src);
    av::msdf::decode(*e, dst);*/
    return dst;
}
