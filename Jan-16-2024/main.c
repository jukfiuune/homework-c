#include <stdio.h>
#include "counter.h"

int main(void){
    long sum = 0;
    for(int i = 0; i < 10; i++){
        addoddtosum();
    }
    printf("Sum is %ld \n", sum);
    return 0;
}