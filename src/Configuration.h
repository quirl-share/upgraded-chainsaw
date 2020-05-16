
#pragma once

#include "caf/all.hpp"

class Configuration : public caf::actor_system_config {
public:
    uint16_t port = 0;
    std::string host = "localhost";

    Configuration() { }
};
