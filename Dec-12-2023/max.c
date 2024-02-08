#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main(int argc, char * argv[]){
    printf("%lf", MAX(atoi(argv[1]), atoi(argv[2])));
    return 0;
}