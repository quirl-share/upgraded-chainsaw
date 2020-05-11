cmake_minimum_required(VERSION 3.16)
project(upgraded-chainsaw)

set(CMAKE_CXX_STANDARD 20)


# Set module path appropriately.
find_path(CAF_INCLUDE_DIRS caf/all.hpp)
find_path(AVRO_INCLUDE_DIRS avro/Resolver.hh)

find_library(CAF_CORE_LIBRARY caf_core_static)
find_library(CAF_IO_LIBRARY caf_io_static)
find_library(AVRO_LIBRARY avrocpp)

find_package(Boost COMPONENTS filesystem iostreams REQUIRED )

message("CAF INCLUDE: ${CAF_INCLUDE_DIRS}")
message("AVRO INCLUDE: ${AVRO_INCLUDE_DIRS}")
message("BOOST INCLUDE: ${BOOST_INCLUDE_DIRS}")

message("CAF CORE lib: ${CAF_CORE_LIBRARY}")
message("CAF IO lib: ${CAF_IO_LIBRARY}")
message("AVRO: ${AVRO_LIBRARY}")

include_directories(${CAF_INCLUDE_DIRS})
include_directories(${AVRO_INCLUDE_DIRS})
include_directories(${BOOST_INCLUDE_DIRS})

add_executable(ingest_actor_winner
        src/main.cpp
        src/actors/Supvervisor.cpp
        src/actors/Supvervisor.h
        src/Configuration.cpp
        src/Configuration.h src/actors/MessageTransformerInterface.cpp src/actors/MessageTransformerInterface.h src/messages/messages.cpp src/messages/messages.h)

target_link_libraries(ingest_actor_winner
        ${CAF_IO_LIBRARY}
        ${CAF_CORE_LIBRARY}
        ${AVRO_LIBRARY}
        Iphlpapi)