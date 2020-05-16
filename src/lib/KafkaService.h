#pragma once

#include <string>
#include "cppkafka/configuration.h"
#include "cppkafka/consumer.h"

class KafkaService {
private:
    cppkafka::Configuration m_config = {
            // The list of brokers we'll use
            { "metadata.broker.list", "localhost" },

            // Our consumer's group
            { "group.id", "kafka-consumer-test" },

            // Disable auto commit
            { "enable.auto.commit", false },

            // Client group session timeout
            { "session.timeout.ms", 60000 }
    };
    cppkafka::Consumer m_consumer{m_config};

public:
    KafkaService () {
    }

protected:
    const std::string input_topic = "test_in";
    const std::string output_topic = "test_out";
    const std::string group = "test";

protected:
    virtual bool filter(const cppkafka::Message &msg) const = 0;
    virtual void process(const cppkafka::Message &msg) const = 0;

};
