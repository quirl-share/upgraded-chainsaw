cmake_minimum_required(VERSION 3.16)
project(upgraded-chainsaw)

set(CMAKE_CXX_STANDARD 20)


# Set module path appropriately.
find_path(CAF_INCLUDE_DIRS caf/all.hpp)
find_path(AVRO_INCLUDE_DIRS avro/Resolver.hh)
find_path(KAFKA_INCLUDE_DIRS cppkafka/header.h)

find_library(CAF_CORE_LIBRARY caf_core_static)
find_library(CAF_IO_LIBRARY caf_io_static)
find_library(AVRO_LIBRARY avrocpp)
find_library(KAFKA_LIBRARY cppkafka)

find_package(Boost COMPONENTS filesystem iostreams REQUIRED )
find_package(cpprestsdk REQUIRED)
find_package(protobuf CONFIG REQUIRED)

message("CAF INCLUDE: ${CAF_INCLUDE_DIRS}")
message("AVRO INCLUDE: ${AVRO_INCLUDE_DIRS}")
message("KAFKA INCLUDE: ${KAFKA_INCLUDE_DIRS}")

message("CAF CORE lib: ${CAF_CORE_LIBRARY}")
message("CAF IO lib: ${CAF_IO_LIBRARY}")
message("AVRO: ${AVRO_LIBRARY}")

include_directories(${CAF_INCLUDE_DIRS})
include_directories(${AVRO_INCLUDE_DIRS})
include_directories(${BOOST_INCLUDE_DIRS})
include_directories(src)

include_directories(src)


add_executable(upgraded-chainsaw
        src/main.cpp
        src/actors/Supvervisor.h
        src/Configuration.cpp
        src/Configuration.h src/lib/AvroSerializer.cpp
        src/lib/AvroSerializer.h
        src/actors/AvroPerformance.h
        src/lib/KafkaService.cpp
        src/lib/KafkaService.h
        src/actors/FileReader.h
        src/lib/controls.h
        src/lib/AvroAdsbExchangeEtl.h
        src/lib/ProtoExchangeEtl.h
        src/actors/pipeline.h
        src/actors/JsonToAvroActor.h
        src/lib/AvroPrinter.h
        src/actors/Monitor.h
        src/lib/ProtoSerializer.cpp
        src/lib/ProtoSerializer.h
        conf/proto.proto
        conf/avro.json
        )

include_directories(${PROJECT_BINARY_DIR})

target_link_libraries(upgraded-chainsaw
        ${CAF_IO_LIBRARY}
        ${CAF_CORE_LIBRARY}
        ${AVRO_LIBRARY}
        ${KAFKA_LIBRARY}
        cpprestsdk::cpprest
        protobuf::libprotobuf
        $<$<PLATFORM_ID:Windows>:Iphlpapi>
        $<$<PLATFORM_ID:Linux>:pthread>
        )

protobuf_generate(TARGET upgraded-chainsaw)
