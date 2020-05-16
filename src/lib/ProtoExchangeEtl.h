#pragma once

#include <utility>
#include <optional>

#include "conf/proto.pb.h"
#include "cpprest/json.h"

using namespace web;

namespace {
    class Builder {
        const json::value m_value;
    public:
        explicit Builder(json::value v) : m_value(std::move(v)) { }

        [[nodiscard]] av::msdf::Message create() const {
            av::msdf::Message msg;
            if (auto positionCartesian = getPositionCartesian(); positionCartesian.has_value()) {
                //av::msdf::Position pos;
                //pos.cartesian.set_PositionCartesian(positionCartesian.value());
                //msg.position.set_Position(pos);
                msg.mutable_position()->mutable_cartesian()->CopyFrom(positionCartesian.value());
            }
            if (auto altitudeCartesian = getAltitudeCartesian(); altitudeCartesian.has_value()) {
//                av::msdf::Altitude alt;
//                alt.cartesian.set_AltitudeCartesian(altitudeCartesian.value());
//                msg.altitude.set_Altitude(alt);
                msg.mutable_altitude()->mutable_cartesian()->CopyFrom(altitudeCartesian.value());
            }
            if (auto velocityCartesian = getVelocityCartesian(); velocityCartesian.has_value()) {
//                av::msdf::Velocity vel;
//                vel.cartesian.set_VelocityCartesian(velocityCartesian.value());
//                msg.velocity.set_Velocity(vel);
                msg.mutable_velocity()->mutable_cartesian()->CopyFrom(velocityCartesian.value());
            }
            return msg;
        }

        [[nodiscard]] std::optional<av::msdf::PositionCartesian> getPositionCartesian() const {
            static const auto latField = U("Lat");
            static const auto lonField = U("Long");
            std::optional<av::msdf::PositionCartesian> retval = std::nullopt;

            if (m_value.has_field(latField) && m_value.has_field(lonField)) {
                double latitude = m_value.as_object().at(latField).as_double();
                double longitude = m_value.as_object().at(lonField).as_double();
                av::msdf::PositionCartesian pos;
                pos.set_x(latitude);
                pos.set_y(longitude);
                pos.set_var_x(0.0);
                pos.set_var_y(0.0);
                retval = std::optional<av::msdf::PositionCartesian>{pos};
            }
            return retval;
        };

        [[nodiscard]] std::optional<av::msdf::AltitudeCartesian> getAltitudeCartesian() const {
            static const auto altField = U("Alt");
            std::optional<av::msdf::AltitudeCartesian> retval = std::nullopt;

            if (m_value.has_field(altField)) {
                double altitude = m_value.as_object().at(altField).as_double();
                av::msdf::AltitudeCartesian alt;
                alt.set_value(altitude);
                retval = std::optional<av::msdf::AltitudeCartesian>{alt};
            }
            return retval;
        };

        [[nodiscard]] std::optional<av::msdf::VelocityCartesian> getVelocityCartesian() const {
            static const auto spdField = U("Spd");
            std::optional<av::msdf::VelocityCartesian> retval = std::nullopt;

            if (m_value.has_field(spdField)) {
                double speed = m_value.as_object().at(spdField).as_double();
                av::msdf::VelocityCartesian velocity;
                velocity.set_x(speed);
                velocity.set_y(speed);
                retval = std::optional<av::msdf::VelocityCartesian>{velocity};
            }
            return retval;
        }
    };
}
template <>
class AdsbExchangeEtl<av::msdf::Message> {
public:
    static av::msdf::Message transform(const std::string &input) {
        json::value v = json::value::parse(input);
        Builder builder{v};
        return builder.create();
    };
};
