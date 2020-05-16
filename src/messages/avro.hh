/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef ___AVRO_HH_1047525425__H_
#define ___AVRO_HH_1047525425__H_


#include <sstream>
#include "boost/any.hpp"
#include "avro/Specific.hh"
#include "avro/Encoder.hh"
#include "avro/Decoder.hh"

namespace av {
namespace msdf_avro {
struct avro_json_Union__0__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__0__();
};

struct PositionCartesian {
    typedef avro_json_Union__0__ cov_xy_t;
    double x;
    double y;
    double var_x;
    double var_y;
    cov_xy_t cov_xy;
    PositionCartesian() :
        x(double()),
        y(double()),
        var_x(double()),
        var_y(double()),
        cov_xy(cov_xy_t())
        { }
};

struct PositionPolar {
    double rho;
    double theta;
    PositionPolar() :
        rho(double()),
        theta(double())
        { }
};

struct avro_json_Union__1__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__1__();
};

struct avro_json_Union__2__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__2__();
};

struct avro_json_Union__3__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__3__();
};

struct PositionWgs84 {
    typedef avro_json_Union__1__ var_lat_t;
    typedef avro_json_Union__2__ var_lon_t;
    typedef avro_json_Union__3__ cov_latlon_t;
    double lat;
    double lon;
    var_lat_t var_lat;
    var_lon_t var_lon;
    cov_latlon_t cov_latlon;
    PositionWgs84() :
        lat(double()),
        lon(double()),
        var_lat(var_lat_t()),
        var_lon(var_lon_t()),
        cov_latlon(cov_latlon_t())
        { }
};

struct avro_json_Union__4__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    PositionCartesian get_PositionCartesian() const;
    void set_PositionCartesian(const PositionCartesian& v);
    avro_json_Union__4__();
};

struct avro_json_Union__5__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    PositionPolar get_PositionPolar() const;
    void set_PositionPolar(const PositionPolar& v);
    avro_json_Union__5__();
};

struct avro_json_Union__6__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    PositionWgs84 get_PositionWgs84() const;
    void set_PositionWgs84(const PositionWgs84& v);
    avro_json_Union__6__();
};

struct Position {
    typedef avro_json_Union__4__ cartesian_t;
    typedef avro_json_Union__5__ polar_t;
    typedef avro_json_Union__6__ wgs84_t;
    cartesian_t cartesian;
    polar_t polar;
    wgs84_t wgs84;
    Position() :
        cartesian(cartesian_t()),
        polar(polar_t()),
        wgs84(wgs84_t())
        { }
};

struct avro_json_Union__7__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__7__();
};

struct avro_json_Union__8__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__8__();
};

struct VelocityCartesian {
    typedef avro_json_Union__7__ var_x_t;
    typedef avro_json_Union__8__ var_y_t;
    double x;
    double y;
    var_x_t var_x;
    var_y_t var_y;
    VelocityCartesian() :
        x(double()),
        y(double()),
        var_x(var_x_t()),
        var_y(var_y_t())
        { }
};

struct avro_json_Union__9__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__9__();
};

struct avro_json_Union__10__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__10__();
};

struct VelocityPolar {
    typedef avro_json_Union__9__ var_speed_t;
    typedef avro_json_Union__10__ var_angle_t;
    double speed;
    double angle;
    var_speed_t var_speed;
    var_angle_t var_angle;
    VelocityPolar() :
        speed(double()),
        angle(double()),
        var_speed(var_speed_t()),
        var_angle(var_angle_t())
        { }
};

struct avro_json_Union__11__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    VelocityCartesian get_VelocityCartesian() const;
    void set_VelocityCartesian(const VelocityCartesian& v);
    avro_json_Union__11__();
};

struct avro_json_Union__12__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    VelocityPolar get_VelocityPolar() const;
    void set_VelocityPolar(const VelocityPolar& v);
    avro_json_Union__12__();
};

struct Velocity {
    typedef avro_json_Union__11__ cartesian_t;
    typedef avro_json_Union__12__ polar_t;
    cartesian_t cartesian;
    polar_t polar;
    Velocity() :
        cartesian(cartesian_t()),
        polar(polar_t())
        { }
};

struct avro_json_Union__13__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__13__();
};

struct avro_json_Union__14__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__14__();
};

struct AccelerationCartesian {
    typedef avro_json_Union__13__ var_x_t;
    typedef avro_json_Union__14__ var_y_t;
    double speed;
    double angle;
    var_x_t var_x;
    var_y_t var_y;
    AccelerationCartesian() :
        speed(double()),
        angle(double()),
        var_x(var_x_t()),
        var_y(var_y_t())
        { }
};

struct avro_json_Union__15__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    AccelerationCartesian get_AccelerationCartesian() const;
    void set_AccelerationCartesian(const AccelerationCartesian& v);
    avro_json_Union__15__();
};

struct Acceleration {
    typedef avro_json_Union__15__ cartesian_t;
    cartesian_t cartesian;
    Acceleration() :
        cartesian(cartesian_t())
        { }
};

struct avro_json_Union__16__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    bool get_bool() const;
    void set_bool(const bool& v);
    avro_json_Union__16__();
};

struct avro_json_Union__17__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    bool get_bool() const;
    void set_bool(const bool& v);
    avro_json_Union__17__();
};

struct avro_json_Union__18__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    bool get_bool() const;
    void set_bool(const bool& v);
    avro_json_Union__18__();
};

struct AltitudeFlightLevel {
    typedef avro_json_Union__16__ is_qnh_adjusted_t;
    typedef avro_json_Union__17__ is_garbled_t;
    typedef avro_json_Union__18__ is_validated_t;
    double value;
    is_qnh_adjusted_t is_qnh_adjusted;
    is_garbled_t is_garbled;
    is_validated_t is_validated;
    AltitudeFlightLevel() :
        value(double()),
        is_qnh_adjusted(is_qnh_adjusted_t()),
        is_garbled(is_garbled_t()),
        is_validated(is_validated_t())
        { }
};

struct avro_json_Union__19__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__19__();
};

struct AltitudeWsg84 {
    typedef avro_json_Union__19__ accuracy_t;
    double value;
    accuracy_t accuracy;
    AltitudeWsg84() :
        value(double()),
        accuracy(accuracy_t())
        { }
};

struct avro_json_Union__20__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    double get_double() const;
    void set_double(const double& v);
    avro_json_Union__20__();
};

struct AltitudeCartesian {
    typedef avro_json_Union__20__ accuracy_t;
    double value;
    accuracy_t accuracy;
    AltitudeCartesian() :
        value(double()),
        accuracy(accuracy_t())
        { }
};

struct avro_json_Union__21__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    AltitudeWsg84 get_AltitudeWsg84() const;
    void set_AltitudeWsg84(const AltitudeWsg84& v);
    avro_json_Union__21__();
};

struct avro_json_Union__22__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    AltitudeFlightLevel get_AltitudeFlightLevel() const;
    void set_AltitudeFlightLevel(const AltitudeFlightLevel& v);
    avro_json_Union__22__();
};

struct avro_json_Union__23__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    AltitudeCartesian get_AltitudeCartesian() const;
    void set_AltitudeCartesian(const AltitudeCartesian& v);
    avro_json_Union__23__();
};

struct Altitude {
    typedef avro_json_Union__21__ wsg84_t;
    typedef avro_json_Union__22__ flight_level_t;
    typedef avro_json_Union__23__ cartesian_t;
    wsg84_t wsg84;
    flight_level_t flight_level;
    cartesian_t cartesian;
    Altitude() :
        wsg84(wsg84_t()),
        flight_level(flight_level_t()),
        cartesian(cartesian_t())
        { }
};

struct Rocd {
    double value;
    double accuracy;
    Rocd() :
        value(double()),
        accuracy(double())
        { }
};

struct avro_json_Union__24__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    Position get_Position() const;
    void set_Position(const Position& v);
    avro_json_Union__24__();
};

struct avro_json_Union__25__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    Velocity get_Velocity() const;
    void set_Velocity(const Velocity& v);
    avro_json_Union__25__();
};

struct avro_json_Union__26__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    Acceleration get_Acceleration() const;
    void set_Acceleration(const Acceleration& v);
    avro_json_Union__26__();
};

struct avro_json_Union__27__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    Altitude get_Altitude() const;
    void set_Altitude(const Altitude& v);
    avro_json_Union__27__();
};

struct avro_json_Union__28__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    bool is_null() const {
        return (idx_ == 0);
    }
    void set_null() {
        idx_ = 0;
        value_ = boost::any();
    }
    Rocd get_Rocd() const;
    void set_Rocd(const Rocd& v);
    avro_json_Union__28__();
};

struct Message {
    typedef avro_json_Union__24__ position_t;
    typedef avro_json_Union__25__ velocity_t;
    typedef avro_json_Union__26__ acceleration_t;
    typedef avro_json_Union__27__ altitude_t;
    typedef avro_json_Union__28__ rocd_t;
    position_t position;
    velocity_t velocity;
    acceleration_t acceleration;
    altitude_t altitude;
    rocd_t rocd;
    Message() :
        position(position_t()),
        velocity(velocity_t()),
        acceleration(acceleration_t()),
        altitude(altitude_t()),
        rocd(rocd_t())
        { }
};

struct avro_json_Union__29__ {
private:
    size_t idx_;
    boost::any value_;
public:
    size_t idx() const { return idx_; }
    PositionCartesian get_PositionCartesian() const;
    void set_PositionCartesian(const PositionCartesian& v);
    PositionPolar get_PositionPolar() const;
    void set_PositionPolar(const PositionPolar& v);
    PositionWgs84 get_PositionWgs84() const;
    void set_PositionWgs84(const PositionWgs84& v);
    Position get_Position() const;
    void set_Position(const Position& v);
    VelocityCartesian get_VelocityCartesian() const;
    void set_VelocityCartesian(const VelocityCartesian& v);
    VelocityPolar get_VelocityPolar() const;
    void set_VelocityPolar(const VelocityPolar& v);
    Velocity get_Velocity() const;
    void set_Velocity(const Velocity& v);
    AccelerationCartesian get_AccelerationCartesian() const;
    void set_AccelerationCartesian(const AccelerationCartesian& v);
    Acceleration get_Acceleration() const;
    void set_Acceleration(const Acceleration& v);
    AltitudeFlightLevel get_AltitudeFlightLevel() const;
    void set_AltitudeFlightLevel(const AltitudeFlightLevel& v);
    AltitudeWsg84 get_AltitudeWsg84() const;
    void set_AltitudeWsg84(const AltitudeWsg84& v);
    AltitudeCartesian get_AltitudeCartesian() const;
    void set_AltitudeCartesian(const AltitudeCartesian& v);
    Altitude get_Altitude() const;
    void set_Altitude(const Altitude& v);
    Rocd get_Rocd() const;
    void set_Rocd(const Rocd& v);
    Message get_Message() const;
    void set_Message(const Message& v);
    avro_json_Union__29__();
};

inline
double avro_json_Union__0__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__0__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__1__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__1__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__2__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__2__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__3__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__3__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
PositionCartesian avro_json_Union__4__::get_PositionCartesian() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<PositionCartesian >(value_);
}

inline
void avro_json_Union__4__::set_PositionCartesian(const PositionCartesian& v) {
    idx_ = 1;
    value_ = v;
}

inline
PositionPolar avro_json_Union__5__::get_PositionPolar() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<PositionPolar >(value_);
}

inline
void avro_json_Union__5__::set_PositionPolar(const PositionPolar& v) {
    idx_ = 1;
    value_ = v;
}

inline
PositionWgs84 avro_json_Union__6__::get_PositionWgs84() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<PositionWgs84 >(value_);
}

inline
void avro_json_Union__6__::set_PositionWgs84(const PositionWgs84& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__7__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__7__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__8__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__8__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__9__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__9__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__10__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__10__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
VelocityCartesian avro_json_Union__11__::get_VelocityCartesian() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<VelocityCartesian >(value_);
}

inline
void avro_json_Union__11__::set_VelocityCartesian(const VelocityCartesian& v) {
    idx_ = 1;
    value_ = v;
}

inline
VelocityPolar avro_json_Union__12__::get_VelocityPolar() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<VelocityPolar >(value_);
}

inline
void avro_json_Union__12__::set_VelocityPolar(const VelocityPolar& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__13__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__13__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__14__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__14__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
AccelerationCartesian avro_json_Union__15__::get_AccelerationCartesian() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<AccelerationCartesian >(value_);
}

inline
void avro_json_Union__15__::set_AccelerationCartesian(const AccelerationCartesian& v) {
    idx_ = 1;
    value_ = v;
}

inline
bool avro_json_Union__16__::get_bool() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<bool >(value_);
}

inline
void avro_json_Union__16__::set_bool(const bool& v) {
    idx_ = 1;
    value_ = v;
}

inline
bool avro_json_Union__17__::get_bool() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<bool >(value_);
}

inline
void avro_json_Union__17__::set_bool(const bool& v) {
    idx_ = 1;
    value_ = v;
}

inline
bool avro_json_Union__18__::get_bool() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<bool >(value_);
}

inline
void avro_json_Union__18__::set_bool(const bool& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__19__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__19__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
double avro_json_Union__20__::get_double() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<double >(value_);
}

inline
void avro_json_Union__20__::set_double(const double& v) {
    idx_ = 1;
    value_ = v;
}

inline
AltitudeWsg84 avro_json_Union__21__::get_AltitudeWsg84() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<AltitudeWsg84 >(value_);
}

inline
void avro_json_Union__21__::set_AltitudeWsg84(const AltitudeWsg84& v) {
    idx_ = 1;
    value_ = v;
}

inline
AltitudeFlightLevel avro_json_Union__22__::get_AltitudeFlightLevel() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<AltitudeFlightLevel >(value_);
}

inline
void avro_json_Union__22__::set_AltitudeFlightLevel(const AltitudeFlightLevel& v) {
    idx_ = 1;
    value_ = v;
}

inline
AltitudeCartesian avro_json_Union__23__::get_AltitudeCartesian() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<AltitudeCartesian >(value_);
}

inline
void avro_json_Union__23__::set_AltitudeCartesian(const AltitudeCartesian& v) {
    idx_ = 1;
    value_ = v;
}

inline
Position avro_json_Union__24__::get_Position() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Position >(value_);
}

inline
void avro_json_Union__24__::set_Position(const Position& v) {
    idx_ = 1;
    value_ = v;
}

inline
Velocity avro_json_Union__25__::get_Velocity() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Velocity >(value_);
}

inline
void avro_json_Union__25__::set_Velocity(const Velocity& v) {
    idx_ = 1;
    value_ = v;
}

inline
Acceleration avro_json_Union__26__::get_Acceleration() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Acceleration >(value_);
}

inline
void avro_json_Union__26__::set_Acceleration(const Acceleration& v) {
    idx_ = 1;
    value_ = v;
}

inline
Altitude avro_json_Union__27__::get_Altitude() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Altitude >(value_);
}

inline
void avro_json_Union__27__::set_Altitude(const Altitude& v) {
    idx_ = 1;
    value_ = v;
}

inline
Rocd avro_json_Union__28__::get_Rocd() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Rocd >(value_);
}

inline
void avro_json_Union__28__::set_Rocd(const Rocd& v) {
    idx_ = 1;
    value_ = v;
}

inline
PositionCartesian avro_json_Union__29__::get_PositionCartesian() const {
    if (idx_ != 0) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<PositionCartesian >(value_);
}

inline
void avro_json_Union__29__::set_PositionCartesian(const PositionCartesian& v) {
    idx_ = 0;
    value_ = v;
}

inline
PositionPolar avro_json_Union__29__::get_PositionPolar() const {
    if (idx_ != 1) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<PositionPolar >(value_);
}

inline
void avro_json_Union__29__::set_PositionPolar(const PositionPolar& v) {
    idx_ = 1;
    value_ = v;
}

inline
PositionWgs84 avro_json_Union__29__::get_PositionWgs84() const {
    if (idx_ != 2) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<PositionWgs84 >(value_);
}

inline
void avro_json_Union__29__::set_PositionWgs84(const PositionWgs84& v) {
    idx_ = 2;
    value_ = v;
}

inline
Position avro_json_Union__29__::get_Position() const {
    if (idx_ != 3) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Position >(value_);
}

inline
void avro_json_Union__29__::set_Position(const Position& v) {
    idx_ = 3;
    value_ = v;
}

inline
VelocityCartesian avro_json_Union__29__::get_VelocityCartesian() const {
    if (idx_ != 4) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<VelocityCartesian >(value_);
}

inline
void avro_json_Union__29__::set_VelocityCartesian(const VelocityCartesian& v) {
    idx_ = 4;
    value_ = v;
}

inline
VelocityPolar avro_json_Union__29__::get_VelocityPolar() const {
    if (idx_ != 5) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<VelocityPolar >(value_);
}

inline
void avro_json_Union__29__::set_VelocityPolar(const VelocityPolar& v) {
    idx_ = 5;
    value_ = v;
}

inline
Velocity avro_json_Union__29__::get_Velocity() const {
    if (idx_ != 6) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Velocity >(value_);
}

inline
void avro_json_Union__29__::set_Velocity(const Velocity& v) {
    idx_ = 6;
    value_ = v;
}

inline
AccelerationCartesian avro_json_Union__29__::get_AccelerationCartesian() const {
    if (idx_ != 7) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<AccelerationCartesian >(value_);
}

inline
void avro_json_Union__29__::set_AccelerationCartesian(const AccelerationCartesian& v) {
    idx_ = 7;
    value_ = v;
}

inline
Acceleration avro_json_Union__29__::get_Acceleration() const {
    if (idx_ != 8) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Acceleration >(value_);
}

inline
void avro_json_Union__29__::set_Acceleration(const Acceleration& v) {
    idx_ = 8;
    value_ = v;
}

inline
AltitudeFlightLevel avro_json_Union__29__::get_AltitudeFlightLevel() const {
    if (idx_ != 9) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<AltitudeFlightLevel >(value_);
}

inline
void avro_json_Union__29__::set_AltitudeFlightLevel(const AltitudeFlightLevel& v) {
    idx_ = 9;
    value_ = v;
}

inline
AltitudeWsg84 avro_json_Union__29__::get_AltitudeWsg84() const {
    if (idx_ != 10) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<AltitudeWsg84 >(value_);
}

inline
void avro_json_Union__29__::set_AltitudeWsg84(const AltitudeWsg84& v) {
    idx_ = 10;
    value_ = v;
}

inline
AltitudeCartesian avro_json_Union__29__::get_AltitudeCartesian() const {
    if (idx_ != 11) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<AltitudeCartesian >(value_);
}

inline
void avro_json_Union__29__::set_AltitudeCartesian(const AltitudeCartesian& v) {
    idx_ = 11;
    value_ = v;
}

inline
Altitude avro_json_Union__29__::get_Altitude() const {
    if (idx_ != 12) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Altitude >(value_);
}

inline
void avro_json_Union__29__::set_Altitude(const Altitude& v) {
    idx_ = 12;
    value_ = v;
}

inline
Rocd avro_json_Union__29__::get_Rocd() const {
    if (idx_ != 13) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Rocd >(value_);
}

inline
void avro_json_Union__29__::set_Rocd(const Rocd& v) {
    idx_ = 13;
    value_ = v;
}

inline
Message avro_json_Union__29__::get_Message() const {
    if (idx_ != 14) {
        throw avro::Exception("Invalid type for union");
    }
    return boost::any_cast<Message >(value_);
}

inline
void avro_json_Union__29__::set_Message(const Message& v) {
    idx_ = 14;
    value_ = v;
}

inline avro_json_Union__0__::avro_json_Union__0__() : idx_(0) { }
inline avro_json_Union__1__::avro_json_Union__1__() : idx_(0) { }
inline avro_json_Union__2__::avro_json_Union__2__() : idx_(0) { }
inline avro_json_Union__3__::avro_json_Union__3__() : idx_(0) { }
inline avro_json_Union__4__::avro_json_Union__4__() : idx_(0) { }
inline avro_json_Union__5__::avro_json_Union__5__() : idx_(0) { }
inline avro_json_Union__6__::avro_json_Union__6__() : idx_(0) { }
inline avro_json_Union__7__::avro_json_Union__7__() : idx_(0) { }
inline avro_json_Union__8__::avro_json_Union__8__() : idx_(0) { }
inline avro_json_Union__9__::avro_json_Union__9__() : idx_(0) { }
inline avro_json_Union__10__::avro_json_Union__10__() : idx_(0) { }
inline avro_json_Union__11__::avro_json_Union__11__() : idx_(0) { }
inline avro_json_Union__12__::avro_json_Union__12__() : idx_(0) { }
inline avro_json_Union__13__::avro_json_Union__13__() : idx_(0) { }
inline avro_json_Union__14__::avro_json_Union__14__() : idx_(0) { }
inline avro_json_Union__15__::avro_json_Union__15__() : idx_(0) { }
inline avro_json_Union__16__::avro_json_Union__16__() : idx_(0) { }
inline avro_json_Union__17__::avro_json_Union__17__() : idx_(0) { }
inline avro_json_Union__18__::avro_json_Union__18__() : idx_(0) { }
inline avro_json_Union__19__::avro_json_Union__19__() : idx_(0) { }
inline avro_json_Union__20__::avro_json_Union__20__() : idx_(0) { }
inline avro_json_Union__21__::avro_json_Union__21__() : idx_(0) { }
inline avro_json_Union__22__::avro_json_Union__22__() : idx_(0) { }
inline avro_json_Union__23__::avro_json_Union__23__() : idx_(0) { }
inline avro_json_Union__24__::avro_json_Union__24__() : idx_(0) { }
inline avro_json_Union__25__::avro_json_Union__25__() : idx_(0) { }
inline avro_json_Union__26__::avro_json_Union__26__() : idx_(0) { }
inline avro_json_Union__27__::avro_json_Union__27__() : idx_(0) { }
inline avro_json_Union__28__::avro_json_Union__28__() : idx_(0) { }
inline avro_json_Union__29__::avro_json_Union__29__() : idx_(0), value_(PositionCartesian()) { }
}
}
namespace avro {
template<> struct codec_traits<av::msdf_avro::avro_json_Union__0__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__0__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__0__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::PositionCartesian> {
    static void encode(Encoder& e, const av::msdf_avro::PositionCartesian& v) {
        avro::encode(e, v.x);
        avro::encode(e, v.y);
        avro::encode(e, v.var_x);
        avro::encode(e, v.var_y);
        avro::encode(e, v.cov_xy);
    }
    static void decode(Decoder& d, av::msdf_avro::PositionCartesian& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.x);
                    break;
                case 1:
                    avro::decode(d, v.y);
                    break;
                case 2:
                    avro::decode(d, v.var_x);
                    break;
                case 3:
                    avro::decode(d, v.var_y);
                    break;
                case 4:
                    avro::decode(d, v.cov_xy);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.x);
            avro::decode(d, v.y);
            avro::decode(d, v.var_x);
            avro::decode(d, v.var_y);
            avro::decode(d, v.cov_xy);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::PositionPolar> {
    static void encode(Encoder& e, const av::msdf_avro::PositionPolar& v) {
        avro::encode(e, v.rho);
        avro::encode(e, v.theta);
    }
    static void decode(Decoder& d, av::msdf_avro::PositionPolar& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.rho);
                    break;
                case 1:
                    avro::decode(d, v.theta);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.rho);
            avro::decode(d, v.theta);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__1__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__1__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__1__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__2__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__2__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__2__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__3__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__3__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__3__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::PositionWgs84> {
    static void encode(Encoder& e, const av::msdf_avro::PositionWgs84& v) {
        avro::encode(e, v.lat);
        avro::encode(e, v.lon);
        avro::encode(e, v.var_lat);
        avro::encode(e, v.var_lon);
        avro::encode(e, v.cov_latlon);
    }
    static void decode(Decoder& d, av::msdf_avro::PositionWgs84& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.lat);
                    break;
                case 1:
                    avro::decode(d, v.lon);
                    break;
                case 2:
                    avro::decode(d, v.var_lat);
                    break;
                case 3:
                    avro::decode(d, v.var_lon);
                    break;
                case 4:
                    avro::decode(d, v.cov_latlon);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.lat);
            avro::decode(d, v.lon);
            avro::decode(d, v.var_lat);
            avro::decode(d, v.var_lon);
            avro::decode(d, v.cov_latlon);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__4__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__4__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_PositionCartesian());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__4__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::PositionCartesian vv;
                avro::decode(d, vv);
                v.set_PositionCartesian(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__5__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__5__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_PositionPolar());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__5__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::PositionPolar vv;
                avro::decode(d, vv);
                v.set_PositionPolar(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__6__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__6__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_PositionWgs84());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__6__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::PositionWgs84 vv;
                avro::decode(d, vv);
                v.set_PositionWgs84(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::Position> {
    static void encode(Encoder& e, const av::msdf_avro::Position& v) {
        avro::encode(e, v.cartesian);
        avro::encode(e, v.polar);
        avro::encode(e, v.wgs84);
    }
    static void decode(Decoder& d, av::msdf_avro::Position& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.cartesian);
                    break;
                case 1:
                    avro::decode(d, v.polar);
                    break;
                case 2:
                    avro::decode(d, v.wgs84);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.cartesian);
            avro::decode(d, v.polar);
            avro::decode(d, v.wgs84);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__7__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__7__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__7__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__8__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__8__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__8__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::VelocityCartesian> {
    static void encode(Encoder& e, const av::msdf_avro::VelocityCartesian& v) {
        avro::encode(e, v.x);
        avro::encode(e, v.y);
        avro::encode(e, v.var_x);
        avro::encode(e, v.var_y);
    }
    static void decode(Decoder& d, av::msdf_avro::VelocityCartesian& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.x);
                    break;
                case 1:
                    avro::decode(d, v.y);
                    break;
                case 2:
                    avro::decode(d, v.var_x);
                    break;
                case 3:
                    avro::decode(d, v.var_y);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.x);
            avro::decode(d, v.y);
            avro::decode(d, v.var_x);
            avro::decode(d, v.var_y);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__9__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__9__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__9__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__10__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__10__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__10__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::VelocityPolar> {
    static void encode(Encoder& e, const av::msdf_avro::VelocityPolar& v) {
        avro::encode(e, v.speed);
        avro::encode(e, v.angle);
        avro::encode(e, v.var_speed);
        avro::encode(e, v.var_angle);
    }
    static void decode(Decoder& d, av::msdf_avro::VelocityPolar& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.speed);
                    break;
                case 1:
                    avro::decode(d, v.angle);
                    break;
                case 2:
                    avro::decode(d, v.var_speed);
                    break;
                case 3:
                    avro::decode(d, v.var_angle);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.speed);
            avro::decode(d, v.angle);
            avro::decode(d, v.var_speed);
            avro::decode(d, v.var_angle);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__11__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__11__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_VelocityCartesian());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__11__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::VelocityCartesian vv;
                avro::decode(d, vv);
                v.set_VelocityCartesian(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__12__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__12__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_VelocityPolar());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__12__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::VelocityPolar vv;
                avro::decode(d, vv);
                v.set_VelocityPolar(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::Velocity> {
    static void encode(Encoder& e, const av::msdf_avro::Velocity& v) {
        avro::encode(e, v.cartesian);
        avro::encode(e, v.polar);
    }
    static void decode(Decoder& d, av::msdf_avro::Velocity& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.cartesian);
                    break;
                case 1:
                    avro::decode(d, v.polar);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.cartesian);
            avro::decode(d, v.polar);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__13__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__13__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__13__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__14__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__14__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__14__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::AccelerationCartesian> {
    static void encode(Encoder& e, const av::msdf_avro::AccelerationCartesian& v) {
        avro::encode(e, v.speed);
        avro::encode(e, v.angle);
        avro::encode(e, v.var_x);
        avro::encode(e, v.var_y);
    }
    static void decode(Decoder& d, av::msdf_avro::AccelerationCartesian& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.speed);
                    break;
                case 1:
                    avro::decode(d, v.angle);
                    break;
                case 2:
                    avro::decode(d, v.var_x);
                    break;
                case 3:
                    avro::decode(d, v.var_y);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.speed);
            avro::decode(d, v.angle);
            avro::decode(d, v.var_x);
            avro::decode(d, v.var_y);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__15__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__15__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_AccelerationCartesian());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__15__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::AccelerationCartesian vv;
                avro::decode(d, vv);
                v.set_AccelerationCartesian(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::Acceleration> {
    static void encode(Encoder& e, const av::msdf_avro::Acceleration& v) {
        avro::encode(e, v.cartesian);
    }
    static void decode(Decoder& d, av::msdf_avro::Acceleration& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.cartesian);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.cartesian);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__16__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__16__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_bool());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__16__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                bool vv;
                avro::decode(d, vv);
                v.set_bool(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__17__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__17__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_bool());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__17__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                bool vv;
                avro::decode(d, vv);
                v.set_bool(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__18__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__18__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_bool());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__18__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                bool vv;
                avro::decode(d, vv);
                v.set_bool(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::AltitudeFlightLevel> {
    static void encode(Encoder& e, const av::msdf_avro::AltitudeFlightLevel& v) {
        avro::encode(e, v.value);
        avro::encode(e, v.is_qnh_adjusted);
        avro::encode(e, v.is_garbled);
        avro::encode(e, v.is_validated);
    }
    static void decode(Decoder& d, av::msdf_avro::AltitudeFlightLevel& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.value);
                    break;
                case 1:
                    avro::decode(d, v.is_qnh_adjusted);
                    break;
                case 2:
                    avro::decode(d, v.is_garbled);
                    break;
                case 3:
                    avro::decode(d, v.is_validated);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.value);
            avro::decode(d, v.is_qnh_adjusted);
            avro::decode(d, v.is_garbled);
            avro::decode(d, v.is_validated);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__19__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__19__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__19__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::AltitudeWsg84> {
    static void encode(Encoder& e, const av::msdf_avro::AltitudeWsg84& v) {
        avro::encode(e, v.value);
        avro::encode(e, v.accuracy);
    }
    static void decode(Decoder& d, av::msdf_avro::AltitudeWsg84& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.value);
                    break;
                case 1:
                    avro::decode(d, v.accuracy);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.value);
            avro::decode(d, v.accuracy);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__20__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__20__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_double());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__20__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                double vv;
                avro::decode(d, vv);
                v.set_double(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::AltitudeCartesian> {
    static void encode(Encoder& e, const av::msdf_avro::AltitudeCartesian& v) {
        avro::encode(e, v.value);
        avro::encode(e, v.accuracy);
    }
    static void decode(Decoder& d, av::msdf_avro::AltitudeCartesian& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.value);
                    break;
                case 1:
                    avro::decode(d, v.accuracy);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.value);
            avro::decode(d, v.accuracy);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__21__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__21__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_AltitudeWsg84());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__21__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::AltitudeWsg84 vv;
                avro::decode(d, vv);
                v.set_AltitudeWsg84(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__22__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__22__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_AltitudeFlightLevel());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__22__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::AltitudeFlightLevel vv;
                avro::decode(d, vv);
                v.set_AltitudeFlightLevel(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__23__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__23__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_AltitudeCartesian());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__23__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::AltitudeCartesian vv;
                avro::decode(d, vv);
                v.set_AltitudeCartesian(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::Altitude> {
    static void encode(Encoder& e, const av::msdf_avro::Altitude& v) {
        avro::encode(e, v.wsg84);
        avro::encode(e, v.flight_level);
        avro::encode(e, v.cartesian);
    }
    static void decode(Decoder& d, av::msdf_avro::Altitude& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.wsg84);
                    break;
                case 1:
                    avro::decode(d, v.flight_level);
                    break;
                case 2:
                    avro::decode(d, v.cartesian);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.wsg84);
            avro::decode(d, v.flight_level);
            avro::decode(d, v.cartesian);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::Rocd> {
    static void encode(Encoder& e, const av::msdf_avro::Rocd& v) {
        avro::encode(e, v.value);
        avro::encode(e, v.accuracy);
    }
    static void decode(Decoder& d, av::msdf_avro::Rocd& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.value);
                    break;
                case 1:
                    avro::decode(d, v.accuracy);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.value);
            avro::decode(d, v.accuracy);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__24__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__24__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_Position());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__24__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::Position vv;
                avro::decode(d, vv);
                v.set_Position(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__25__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__25__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_Velocity());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__25__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::Velocity vv;
                avro::decode(d, vv);
                v.set_Velocity(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__26__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__26__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_Acceleration());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__26__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::Acceleration vv;
                avro::decode(d, vv);
                v.set_Acceleration(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__27__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__27__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_Altitude());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__27__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::Altitude vv;
                avro::decode(d, vv);
                v.set_Altitude(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__28__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__28__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            e.encodeNull();
            break;
        case 1:
            avro::encode(e, v.get_Rocd());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__28__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 2) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            d.decodeNull();
            v.set_null();
            break;
        case 1:
            {
                av::msdf_avro::Rocd vv;
                avro::decode(d, vv);
                v.set_Rocd(vv);
            }
            break;
        }
    }
};

template<> struct codec_traits<av::msdf_avro::Message> {
    static void encode(Encoder& e, const av::msdf_avro::Message& v) {
        avro::encode(e, v.position);
        avro::encode(e, v.velocity);
        avro::encode(e, v.acceleration);
        avro::encode(e, v.altitude);
        avro::encode(e, v.rocd);
    }
    static void decode(Decoder& d, av::msdf_avro::Message& v) {
        if (avro::ResolvingDecoder *rd =
            dynamic_cast<avro::ResolvingDecoder *>(&d)) {
            const std::vector<size_t> fo = rd->fieldOrder();
            for (std::vector<size_t>::const_iterator it = fo.begin();
                it != fo.end(); ++it) {
                switch (*it) {
                case 0:
                    avro::decode(d, v.position);
                    break;
                case 1:
                    avro::decode(d, v.velocity);
                    break;
                case 2:
                    avro::decode(d, v.acceleration);
                    break;
                case 3:
                    avro::decode(d, v.altitude);
                    break;
                case 4:
                    avro::decode(d, v.rocd);
                    break;
                default:
                    break;
                }
            }
        } else {
            avro::decode(d, v.position);
            avro::decode(d, v.velocity);
            avro::decode(d, v.acceleration);
            avro::decode(d, v.altitude);
            avro::decode(d, v.rocd);
        }
    }
};

template<> struct codec_traits<av::msdf_avro::avro_json_Union__29__> {
    static void encode(Encoder& e, av::msdf_avro::avro_json_Union__29__ v) {
        e.encodeUnionIndex(v.idx());
        switch (v.idx()) {
        case 0:
            avro::encode(e, v.get_PositionCartesian());
            break;
        case 1:
            avro::encode(e, v.get_PositionPolar());
            break;
        case 2:
            avro::encode(e, v.get_PositionWgs84());
            break;
        case 3:
            avro::encode(e, v.get_Position());
            break;
        case 4:
            avro::encode(e, v.get_VelocityCartesian());
            break;
        case 5:
            avro::encode(e, v.get_VelocityPolar());
            break;
        case 6:
            avro::encode(e, v.get_Velocity());
            break;
        case 7:
            avro::encode(e, v.get_AccelerationCartesian());
            break;
        case 8:
            avro::encode(e, v.get_Acceleration());
            break;
        case 9:
            avro::encode(e, v.get_AltitudeFlightLevel());
            break;
        case 10:
            avro::encode(e, v.get_AltitudeWsg84());
            break;
        case 11:
            avro::encode(e, v.get_AltitudeCartesian());
            break;
        case 12:
            avro::encode(e, v.get_Altitude());
            break;
        case 13:
            avro::encode(e, v.get_Rocd());
            break;
        case 14:
            avro::encode(e, v.get_Message());
            break;
        }
    }
    static void decode(Decoder& d, av::msdf_avro::avro_json_Union__29__& v) {
        size_t n = d.decodeUnionIndex();
        if (n >= 15) { throw avro::Exception("Union index too big"); }
        switch (n) {
        case 0:
            {
                av::msdf_avro::PositionCartesian vv;
                avro::decode(d, vv);
                v.set_PositionCartesian(vv);
            }
            break;
        case 1:
            {
                av::msdf_avro::PositionPolar vv;
                avro::decode(d, vv);
                v.set_PositionPolar(vv);
            }
            break;
        case 2:
            {
                av::msdf_avro::PositionWgs84 vv;
                avro::decode(d, vv);
                v.set_PositionWgs84(vv);
            }
            break;
        case 3:
            {
                av::msdf_avro::Position vv;
                avro::decode(d, vv);
                v.set_Position(vv);
            }
            break;
        case 4:
            {
                av::msdf_avro::VelocityCartesian vv;
                avro::decode(d, vv);
                v.set_VelocityCartesian(vv);
            }
            break;
        case 5:
            {
                av::msdf_avro::VelocityPolar vv;
                avro::decode(d, vv);
                v.set_VelocityPolar(vv);
            }
            break;
        case 6:
            {
                av::msdf_avro::Velocity vv;
                avro::decode(d, vv);
                v.set_Velocity(vv);
            }
            break;
        case 7:
            {
                av::msdf_avro::AccelerationCartesian vv;
                avro::decode(d, vv);
                v.set_AccelerationCartesian(vv);
            }
            break;
        case 8:
            {
                av::msdf_avro::Acceleration vv;
                avro::decode(d, vv);
                v.set_Acceleration(vv);
            }
            break;
        case 9:
            {
                av::msdf_avro::AltitudeFlightLevel vv;
                avro::decode(d, vv);
                v.set_AltitudeFlightLevel(vv);
            }
            break;
        case 10:
            {
                av::msdf_avro::AltitudeWsg84 vv;
                avro::decode(d, vv);
                v.set_AltitudeWsg84(vv);
            }
            break;
        case 11:
            {
                av::msdf_avro::AltitudeCartesian vv;
                avro::decode(d, vv);
                v.set_AltitudeCartesian(vv);
            }
            break;
        case 12:
            {
                av::msdf_avro::Altitude vv;
                avro::decode(d, vv);
                v.set_Altitude(vv);
            }
            break;
        case 13:
            {
                av::msdf_avro::Rocd vv;
                avro::decode(d, vv);
                v.set_Rocd(vv);
            }
            break;
        case 14:
            {
                av::msdf_avro::Message vv;
                avro::decode(d, vv);
                v.set_Message(vv);
            }
            break;
        }
    }
};

}
#endif
