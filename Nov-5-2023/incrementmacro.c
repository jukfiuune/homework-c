#include <stdio.h>

#define ARRAY_SIZE 10

int main() {
    #if defined(ARRAY_SIZE) && (ARRAY_SIZE <= 10) && (ARRAY_SIZE >= 1)
        int array[ARRAY_SIZE];
        int power_of_2 = 1;
        
        for (int i = 0; i < ARRAY_SIZE; i++) {
            array[i] = power_of_2;
            power_of_2 *= 2;
        }
        
        for (int i = 0; i < ARRAY_SIZE; i++) {
            printf("%d\n", array[i]);
        }
        return 0;
    #else
        printf("No array size supported by the application.\n");
        return 1;
    #endif
}
