cmake_minimum_required(VERSION 3.16)
project(upgraded-chainsaw)

set(CMAKE_CXX_STANDARD 20)


# Set module path appropriately.
find_path(CAF_INCLUDE_DIRS caf/all.hpp)
find_path(CAF_INCLUDE_DIRS caf/detail/.hpp)

find_library(CAF_CORE_LIBRARY caf_core_static)
find_library(CAF_IO_LIBRARY caf_io_static)
include_directories(${CAF_INCLUDE_DIRS})

message("INCLUDE: ${CAF_INCLUDE_DIRS}")
message("CORE: ${CAF_CORE_LIBRARY}")
message("IO: ${CAF_IO_LIBRARY}")

find_package(Boost REQUIRED )

add_executable(ingest_actor_winner src/main.cpp src/actors/Supvervisor.cpp src/actors/Supvervisor.h src/Configuration.cpp src/Configuration.h)
target_link_libraries(ingest_actor_winner  ${CAF_IO_LIBRARY} ${CAF_CORE_LIBRARY} Iphlpapi)