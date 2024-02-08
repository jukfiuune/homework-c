#ifndef SCHOOLROOM_H
#define SCHOOLROOM_H

#include "person.h"

#define MAX_ROOM_CAPACITY 50

struct SchoolRoom {
    int room_number;
    struct Person people[MAX_ROOM_CAPACITY];
};

#endif
