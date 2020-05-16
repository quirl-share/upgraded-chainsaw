
#pragma once

#include <messages/avro.hh>

class AvroPrinter {

public:
    static void print(const av::msdf_avro::Message &msg) {

        if (!msg.position.is_null() && !msg.position.get_Position().cartesian.is_null()) {
            auto pc = msg.position.get_Position().cartesian.get_PositionCartesian();
            std::cout << "{Position: (" << pc.x << "," << pc.y << ")} - ";
        }
        if (!msg.velocity.is_null() && !msg.velocity.get_Velocity().cartesian.is_null()) {
            auto pc = msg.velocity.get_Velocity().cartesian.get_VelocityCartesian();
            std::cout << "{Velocity: (" << pc.x << ")} - ";
        }
        if (!msg.altitude.is_null() && !msg.altitude.get_Altitude().cartesian.is_null()) {
            auto pc = msg.altitude.get_Altitude().cartesian.get_AltitudeCartesian();
            std::cout << "{Altitude: (" << pc.value << ")} - ";
        }
        if (!msg.acceleration.is_null() && !msg.acceleration.get_Acceleration().cartesian.is_null()) {
            auto pc = msg.acceleration.get_Acceleration().cartesian.get_AccelerationCartesian();
            std::cout << "{Acceleration: (" << pc.speed << ", " << pc.angle << ")}" ;
        }
        std::cout << std::endl;
    }

};


