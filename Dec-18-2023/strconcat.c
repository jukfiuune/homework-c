#include <stdio.h>
#include <strings.h>
#include "mystrings.h"

int main(int argc, char * argv[]){
    if(argc<3){
        printf("Error: You have entered less than 2 arguments!");
        return 0;
    }
    if(strlength(argv[1])>50){
        printf("Error: The characters of the first argument are more than 50!");
        return 0;
    }
    char str1[100];
    strcpy(str1,argv[1]);
    printf("Before: %s and %s\n", str1,argv[2]);
    strconcat(str1,argv[2]);
    printf("After: %s and %s\n", str1,argv[2]);
    return 0;
}