#include <stdio.h>

#define MAX(a, b) ((a > b) ? (a) : (b))

void main() {
    int x = 10;
    int y = 20;
    printf("The larger of %d and %d is %d\n", x, y, MAX(x, y));
}