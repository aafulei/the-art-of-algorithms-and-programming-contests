// gcc -lm

#include <stdio.h>
#include <math.h>

int main()
{
    printf("lab a1:     11111   *     11111   = %d\n", 11111 * 11111);              // 123454321
    printf("lab a1:    111111   *    111111   = %d\n", 111111 * 111111);            // -539247567 (warning: integer overflow)
    printf("lab a1: 111111111   * 111111111   = %d\n", 111111111 * 111111111);      // 1653732529 (warning: integer overflow)
    printf("lab a2:     11111.0 *     11111.0 = %f\n", 11111.0 * 11111.0);          // 123454321.000000
    printf("lab a2:    111111.0 *    111111.0 = %f\n", 111111.0 * 111111.0);        // 12345654321.000000
    printf("lab a2: 111111111.0 * 111111111.0 = %f\n", 111111111.0 * 111111111.0);  // 12345678987654320.000000
    printf("lab a3: sqrt(-10) = (%%d) %d\n", sqrt(-10));                            // 0 or some garbage value
    printf("lab a3: sqrt(-10) = (%%f) %f\n", sqrt(-10));                            // nan or -nan
    printf("lab a4: 1.0 / 0.0 = (%%d) %d\n", 1.0 / 0.0);                            // 0 or some garbage value
    printf("lab a4: 1.0 / 0.0 = (%%f) %f\n", 1.0 / 0.0);                            // inf
    printf("lab a4: 0.0 / 0.0 = (%%d) %d\n", 0.0 / 0.0);                            // 0 or some garbage value
    printf("lab a4: 0.0 / 0.0 = (%%f) %f\n", 0.0 / 0.0);                            // nan or -nan
    printf("lab a5:   1 / 0   = (%%d) %d\n", 1 / 0);                                // Floating point exception
    return 0;
}
