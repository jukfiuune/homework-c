#include <stdio.h>

#define ASC(x, y) ((x) < (y))
#define DESC(x, y) ((x) > (y))

#define SWAP(A, B, TYPE) do {        \
    TYPE temp = (A);                \
    (A) = (B);                      \
    (B) = temp;                     \
} while (0)

#define SORT(ARRAY, SIZE, TYPE, COMPARE) do { \
    for (int i = 0; i < (SIZE) - 1; i++) { \
        for (int j = 0; j < (SIZE) - i - 1; j++) { \
            if (COMPARE((ARRAY)[j], (ARRAY)[j + 1])) { \
                SWAP((ARRAY)[j], (ARRAY)[j + 1], TYPE); \
            } \
        } \
    } \
} while (0)

void main() {
    int array[] = {5, 2, 9, 1, 5};
    int size = 5;

    SORT(array, size, int, ASC);
    
    printf("Ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    SORT(array, size, int, DESC);

    printf("Descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
