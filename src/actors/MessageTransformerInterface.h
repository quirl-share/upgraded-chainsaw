//
// Created by eible on 10/05/2020.
//

#ifndef UPGRADED_CHAINSAW_MESSAGETRANSFORMERINTERFACE_H
#define UPGRADED_CHAINSAW_MESSAGETRANSFORMERINTERFACE_H

#include "caf/all.hpp"
#include "../messages/messages.h"

using to_avro = caf::atom_constant<caf::atom("to_avro")>;
using to_proto = caf::atom_constant<caf::atom("to_proto")>;

caf::message_handler message_transformer_interface {

    [](to_avro, AdsbRawMessage adsb) -> ProtoMessage { /*...*/ },
    [](to_proto, AdsbRawMessage adsb) -> AvroMessage { /*...*/ },

};


#endif //UPGRADED_CHAINSAW_MESSAGETRANSFORMERINTERFACE_H
