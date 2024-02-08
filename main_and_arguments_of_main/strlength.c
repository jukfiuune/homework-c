#include <stdio.h>
#include "mystrings.h"

int main(int argc, char * argv[]){
    if(argc<2){
        printf("Error: You havent entered an argument!");
        return 0;
    }
    int length = strlength(argv[1]);
    printf("Length of the string: %d\n", length);
    return 0;
}