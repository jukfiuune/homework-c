#include "counter.h"
#include <stdio.h>

extern long sum;

static long nextodd(){
    long oddnumber = 1;
    oddnumber+=2;
    return oddnumber - 2;
}

void addoddtosum(){
    sum += nextodd();
}