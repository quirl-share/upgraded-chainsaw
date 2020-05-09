//
// Created by eible on 09/05/2020.
//

#ifndef INGEST_ACTOR_WINNER_CONFIGURATION_H
#define INGEST_ACTOR_WINNER_CONFIGURATION_H

#include "caf/all.hpp"

class Configuration : public caf::actor_system_config {
public:
    uint16_t port = 0;
    std::string host = "localhost";

    Configuration() {
        opt_group{custom_options_, "global"}
                .add(port, "port,p", "set port")
                .add(host, "host,H", "set host (ignored in server mode)");
    }
};

#endif //INGEST_ACTOR_WINNER_CONFIGURATION_H
