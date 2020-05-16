#pragma once

#include "caf/all.hpp"
#include <vector>
#include <string>
#include <algorithm>
#include "lib/controls.h"

using namespace caf;

class MonitorActor : public event_based_actor  {
    std::vector<std::string> store;
public:
    MonitorActor(actor_config& cfg) : event_based_actor(cfg) {}

    behavior make_behavior() override {
        return {
            [&](store_atom , const std::string &obj) {
                store.push_back(obj);
            },
            [&](print_atom, const std::string &obj){
                std::cout << obj;
            }
        };
    }

};