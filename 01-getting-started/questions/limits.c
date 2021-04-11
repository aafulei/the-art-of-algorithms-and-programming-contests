#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    printf("INT_MIN = %d\n", INT_MIN);      // -2147483648
    printf("INT_MAX = %d\n", INT_MAX);      //  2147483647
    printf("PI = %.100lf\n", acos(-1.0));   // 3.141592653589793115997963468544185161590576171875000... (48 digits)
    printf("DBL_MIN = %lg\n", DBL_MIN);     // 2.22507e-308
    printf("DBL_MAX = %lg\n", DBL_MAX);     // 1.79769e+308
}
