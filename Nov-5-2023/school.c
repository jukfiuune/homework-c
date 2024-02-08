#include <stdio.h>
#include "schoolclass.h"
#include "schoolroom.h"

#define MAX_CLASSES 20
#define MAX_ROOMS 10

struct School {
    struct SchoolClass classes[MAX_CLASSES];
    struct SchoolRoom rooms[MAX_ROOMS];
};

int main() {
    struct School school;

    // Do stuff

    return 0;
}
