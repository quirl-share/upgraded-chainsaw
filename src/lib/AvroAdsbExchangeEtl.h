#pragma once

#include <utility>
#include <optional>

#include "messages/avro.hh"
#include "cpprest/json.h"

template <typename T>
class AdsbExchangeEtl;


#include "ProtoExchangeEtl.h"

using namespace web;

namespace {
    class AvroBuilder {
        const json::value m_value;
    public:
        explicit AvroBuilder(json::value v) : m_value(std::move(v)) { }

        [[nodiscard]] av::msdf_avro::Message create() const {
            av::msdf_avro::Message msg;
            if (auto positionCartesian = getPositionCartesian(); positionCartesian.has_value()) {
                av::msdf_avro::Position pos;
                pos.cartesian.set_PositionCartesian(positionCartesian.value());
                msg.position.set_Position(pos);
            }
            if (auto altitudeCartesian = getAltitudeCartesian(); altitudeCartesian.has_value()) {
                av::msdf_avro::Altitude alt;
                alt.cartesian.set_AltitudeCartesian(altitudeCartesian.value());
                msg.altitude.set_Altitude(alt);
            }
            if (auto velocityCartesian = getVelocityCartesian(); velocityCartesian.has_value()) {
                av::msdf_avro::Velocity vel;
                vel.cartesian.set_VelocityCartesian(velocityCartesian.value());
                msg.velocity.set_Velocity(vel);
            }
            return msg;
        }

        [[nodiscard]] std::optional<av::msdf_avro::PositionCartesian> getPositionCartesian() const {
            static const auto latField = U("Lat");
            static const auto lonField = U("Long");
            std::optional<av::msdf_avro::PositionCartesian> retval = std::nullopt;

            if (m_value.has_field(latField) && m_value.has_field(lonField)) {
                double latitude = m_value.as_object().at(latField).as_double();
                double longitude = m_value.as_object().at(lonField).as_double();
                av::msdf_avro::PositionCartesian pos;
                pos.x = latitude;
                pos.y = longitude;
                pos.var_x = 0.0;
                pos.var_y = 0.0;
                retval = std::optional<av::msdf_avro::PositionCartesian>{pos};
            }
            return retval;
        };

        [[nodiscard]] std::optional<av::msdf_avro::AltitudeCartesian> getAltitudeCartesian() const {
            static const auto altField = U("Alt");
            std::optional<av::msdf_avro::AltitudeCartesian> retval = std::nullopt;

            if (m_value.has_field(altField)) {
                double altitude = m_value.as_object().at(altField).as_double();
                av::msdf_avro::AltitudeCartesian alt;
                alt.value = altitude;
                retval = std::optional<av::msdf_avro::AltitudeCartesian>{alt};
            }
            return retval;
        };

        [[nodiscard]] std::optional<av::msdf_avro::VelocityCartesian> getVelocityCartesian() const {
            static const auto spdField = U("Spd");
            std::optional<av::msdf_avro::VelocityCartesian> retval = std::nullopt;

            if (m_value.has_field(spdField)) {
                double speed = m_value.as_object().at(spdField).as_double();
                av::msdf_avro::VelocityCartesian velocity;
                velocity.x = speed;
                velocity.y = speed;
                retval = std::optional<av::msdf_avro::VelocityCartesian>{velocity};
            }
            return retval;
        }
    };
}

template<>
class AdsbExchangeEtl<av::msdf_avro::Message> {
public:
    static av::msdf_avro::Message transform(const std::string &input) {
        json::value v = json::value::parse(input);
        AvroBuilder builder{v};
        return builder.create();
    };
};
