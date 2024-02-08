#include <stdio.h>
#include <limits.h>

#define PRINT_TYPE_INFO(type) \
    printf("%-15s | %-6s | %-4zu | %20lld | %20lld | %-17s | %20llu\n", \
           #type, \
           sizeof(type) == 1 ? "\"%hhd\"" : (sizeof(type) == 2 ? "\"%hd\"" : (sizeof(type) == 4 ? "\"%d\"" : (sizeof(type) == 8 ? "\"%lld\"" : "N/A"))), \
           sizeof(type), \
           (long long)INT_MIN, \
           (long long)INT_MAX, \
           sizeof(type) == 1 ? "\"%hhu\"" : (sizeof(type) == 2 ? "\"%hu\"" : (sizeof(type) == 4 ? "\"%u\"" : (sizeof(type) == 8 ? "\"%llu\"" : "N/A"))), \
           (unsigned long long)UINT_MAX)

int main() {
    printf("%-15s | %-6s | %-4s | %20s | %20s | %-17s | %20s\n", "Type", "Format", "Size", "Min (Signed)", "Max (Signed)", "Format (Unsigned)", "Max (Unsigned)");
    //printf("---------------|--------|------|----------------------|----------------------|----------------------|----------------------\n");

    PRINT_TYPE_INFO(char);
    PRINT_TYPE_INFO(short);
    PRINT_TYPE_INFO(int);
    PRINT_TYPE_INFO(long);
    PRINT_TYPE_INFO(long long);

    return 0;
}
