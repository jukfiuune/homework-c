#include <stdio.h>
#include "quadraticroots.h"

int main(){
    int ia = -5, ib = 6, ic = 7;
    struct QuadraticRootsResult iresult = findroots(ia,ib,ic);
    printf("Results for int: x1 = %Lf, x2 = %Lf and norealroots = %c\n", iresult.x1, iresult.x2, iresult.norealroots);
    float fa = -5, fb = 6, fc = 7;
    struct QuadraticRootsResult fresult = findroots(fa,fb,fc);
    printf("Results for float: x1 = %Lf, x2 = %Lf and norealroots = %c\n", fresult.x1, fresult.x2, fresult.norealroots);
    double da = -5, db = 6, dc = 7;
    struct QuadraticRootsResult dresult = findroots(da,db,dc);
    printf("Results for double: x1 = %Lf, x2 = %Lf and norealroots = %c\n", dresult.x1, dresult.x2, dresult.norealroots);
}