#include "safeint.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

struct SafeResult safeadd(int a, int b){
    long long lA = (long long)a;
    long long lB = (long long)b;
    if(lA+lB>(long long)INT_MAX || lA+lB<(long long)INT_MIN){
        struct SafeResult result = {a+b, '1'};
        return result;
    }else{
        struct SafeResult result = {a+b, '0'};
        return result;
    }
}
struct SafeResult safesubtract(int a, int b){
    long long lA = (long long)a;
    long long lB = (long long)b;
    if(lA-lB>(long long)INT_MAX || lA-lB<(long long)INT_MIN){
        struct SafeResult result = {a-b, '1'};
        return result;
    }else{
        struct SafeResult result = {a-b, '0'};
        return result;
    }
}
struct SafeResult safemultiply(int a, int b){
    long long lA = (long long)a;
    long long lB = (long long)b;
    if(lA*lB>(long long)INT_MAX || lA*lB<(long long)INT_MIN){
        struct SafeResult result = {a*b, '1'};
        return result;
    }else{
        struct SafeResult result = {a*b, '0'};
        return result;
    }
}
struct SafeResult safedivide(int a, int b){
    long long lA = (long long)a;
    long long lB = (long long)b;
    if(lA/lB>(long long)INT_MAX || lA/lB<(long long)INT_MIN){
        struct SafeResult result = {a/b, '1'};
        return result;
    }else{
        struct SafeResult result = {a/b, '0'};
        return result;
    }
}
struct SafeResult safestrtoint(char* str) {
    int convertedValue = 0;
    char errorFlag = '0';
    int sign = 1;
    for (; *str; ++str) {
        if (*str != '-' && (*str < '0' || *str > '9')) {
            errorFlag = '1';
            break;
        }
        if (*str == '-') {
            sign = -1;
            continue;
        }
        struct SafeResult multiplyResult = safemultiply(convertedValue, 10);
        struct SafeResult addResult = safeadd(multiplyResult.value, sign * (*str - '0'));
        if (multiplyResult.errorflag == '1' || addResult.errorflag == '1') {
            errorFlag = '1';
            break;
        }
        convertedValue = addResult.value;
    }
    struct SafeResult result = {sign * convertedValue, errorFlag};
    return result;
}