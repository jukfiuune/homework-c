#include <stdio.h>
#include <string.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            // Swap arr[i] and arr[min_index]
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void reverseArray(int arr[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = 6;

    #ifdef _WIN32
        printf("Windows\n");
        bubbleSort(arr, size);
    #elif __linux__
        printf("Linux\n");
        selectionSort(arr, size);
    #elif __APPLE__
        printf("macOS\n");
        insertionSort(arr, size);
    #else
        printf("Unknown OS\n");
        reverseArray(arr, size);
    #endif

    printf("Final result: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
