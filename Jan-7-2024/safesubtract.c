#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 1;
    }

    struct SafeResult num1 = safestrtoint(argv[1]);
    struct SafeResult num2 = safestrtoint(argv[2]);
    if(num1.errorflag == '1' || num2.errorflag == '1'){
        printf("Error: Argument is too big for a integer.\n");
        return 1;
    }
    struct SafeResult result = safesubtract(num1.value, num2.value);

    if (result.errorflag == '1') {
        printf("Error: Overflow or Underflow occurred.\n");
        return 1;
    }

    printf("Difference: %d\n", result.value);

    return 0;
}