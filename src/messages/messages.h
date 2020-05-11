//
// Created by eible on 10/05/2020.
//

#ifndef UPGRADED_CHAINSAW_MESSAGES_H
#define UPGRADED_CHAINSAW_MESSAGES_H


struct AvroMessage {
    const int value = 0;
};
struct ProtoMessage {
    const int base;
    const int multiply2;
};
struct AdsbRawMessage {
    const int base;
    const int add2;
};



#endif //UPGRADED_CHAINSAW_MESSAGES_H
