#include <stdio.h>

#define SWAP(A, B, TYPE) do {        \
    TYPE temp = (A);                \
    (A) = (B);                      \
    (B) = temp;                     \
} while (0)

void main() {
    int x = 64;
    int y = 18;
    printf("Before swap: x = %d, y = %d\n", x, y);
    SWAP(x, y, int);
    printf("After swap: x = %d, y = %d\n", x, y);
    double a = 8.23;
    double b = 2.66;
    printf("Before swap: a = %lf, b = %lf\n", a, b);
    SWAP(a, b, double);
    printf("After swap: a = %lf, b = %lf\n", a, b);
}
