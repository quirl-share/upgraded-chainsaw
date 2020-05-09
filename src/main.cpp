#include <string>
#include <iostream>

#include "Configuration.h"
#include "caf/all.hpp"

using std::endl;
using std::string;

using namespace std;
using namespace caf;

behavior texter(event_based_actor* self) {
    return {
            [=](const string& text) -> string {
                aout(self) << text << endl;
                return "";
            }
    };
}

void hello_world(event_based_actor* self, const actor& buddy) {
    // send "Hello World!" to our buddy ...
    self->request(buddy, std::chrono::seconds(10), "Say ");
    self->request(buddy, std::chrono::seconds(10), "Something!");
}

void caf_main(actor_system& system) {
    // create a new actor that calls 'mirror()'
    auto mirror_actor = system.spawn(texter);
    // create another actor that calls 'hello_world(mirror_actor)';
    system.spawn(hello_world, mirror_actor);
    // system will wait until both actors are destroyed before leaving main
}

// creates a main function for us that calls our caf_main
CAF_MAIN()
