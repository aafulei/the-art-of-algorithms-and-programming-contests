#include <stdio.h>

int main()
{
    printf("prog 1-1: %d\n", 1 + 2);            // 3
    printf("lab  1  : %d\n", 3 - 4);            // -1
    printf("lab  2  : %d\n", 5 * 6);            // 30
    printf("lab  3  : %d\n", 8 / 4);            // 2
    printf("lab  4  : %d\n", 8 / 5);            // 1
    printf("prog 1-2: %.1f\n", 8.0 / 5.0);      // 1.6
    printf("lab  5  : %.2f\n", 8.0 / 5.0);      // 1.60
    printf("lab  6  : %.1f\n", 8 / 5);          // 0
    printf("lab  7  : %d\n", 8.0 / 5.0);        // -1717986918
    return 0;
}
