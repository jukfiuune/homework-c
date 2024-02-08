#include "mystrings.h"

int strlength(char * str){
    int length = 0;
    for(;str[length]!='\0';length++);
    return length;
}

void strconcat(char * str1, char * str2){
    // str1 must have a predefined length, or else it causes a segmentation fault
    int str1len = strlength(str1);
    int str2len = strlength(str2);
    for(int i=str1len; i<str1len+str2len;i++){
        str1[i]=str2[i-str1len];
    }
}

int strcompare(char * str1, char * str2){
    int str1len = strlength(str1);
    int str2len = strlength(str2);
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){ 
        if (str1[i] > str2[i]){ 
            return -1; 
        }else if (str2[i] > str1[i]){ 
            return 1;
        } 
    }
    if(str1len > str2len){
        return -1;
    }else if(str1len < str2len){
        return 1;
    }else{
        return 0;
    }
}