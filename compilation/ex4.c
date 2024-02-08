#include <stdio.h>
#include <math.h>

int main(void) {
    long number[] = {5,8,4,8,3,7,3,8,3,9,32,8,3,78};
    for(int i = 0; i<14;i++) {
        printf("%ld becomes %ld,\n",number[i],pow(number[i], 4));
        number[i] = pow(number[i], 4);
    }
    return 0;
}