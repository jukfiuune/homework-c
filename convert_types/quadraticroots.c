#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(long double a, long double b, long double c){
    if((b*b-4*a*c)>=0){
        struct QuadraticRootsResult result = {(-b+sqrtl(b*b-4*a*c))/(2*a), (-b-sqrtl(b*b-4*a*c))/(2*a), '0'};
        return result;
    }else{
        struct QuadraticRootsResult result = {0, 0, '1'};
        return result;
    }
}