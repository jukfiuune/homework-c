#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

struct QuadraticRootsResult{
    long double x1, x2;
    char norealroots;
};

struct QuadraticRootsResult findroots(long double a, long double b, long double c);

#endif