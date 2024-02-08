#include <stdio.h>

#define SQUARE_SUM(A, B) ((A + B) * (A + B))

int main() {
    int num1 = 5, num2 = 2;
    printf("sqroot is: %d", SQUARE_SUM(num1, num2));

    return 0;
}