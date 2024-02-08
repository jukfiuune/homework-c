#include <stdio.h>

#define CREATE_ARRAY(name, a, b, c) \
    int name[5] = {a, b, c}

#define PRINT_ARRAY(name) \
    do { \
        for (int i = 0; i < 3; i++) { \
            printf("%s[%d] = %d\n", #name, i, name[i]); \
        } \
    } while (0)

void main() {
    CREATE_ARRAY(myArray, 1, 2, 3);
    PRINT_ARRAY(myArray);
}
