#include <stdio.h>
#include "mystrings.h"

int main(int argc, char * argv[]){
    if(argc<3){
        printf("Error: You have entered less than 2 arguments!");
        return 0;
    }
    int comparison = strcompare(argv[1], argv[2]);
    if(comparison == 0){
        printf("Strings are equal\n");
    }else if(comparison == -1){
        printf("First string is lexicographically before the second string\n");
    }else{
        printf("First string is lexicographically after the second string\n");
    }
    return 0;
}