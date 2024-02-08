#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main(int argc, char * argv[]){
    printf("Sum is: %lf", sum(atoi(argv[1])));
    return 0;
}