#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main()
{
    printf("INT_MIN = %d\n", INT_MIN);              // -2147483648
    printf("INT_MAX = %d\n", INT_MAX);              //  2147483647
    printf("DBL_EPSILON = %lg\n", DBL_EPSILON);     // 2.22045e-16 (that 1 and 1-epsilon differ)
    printf("DBL_MANT_DIG = %d\n", DBL_MANT_DIG);    // 53 (signicand precision)
    printf("DBL_DIG = %d\n", DBL_DIG);              // 15 (text -> double --> text)
    printf("DECIMAL_DIG = %d\n", DECIMAL_DIG);      // 21 (double --> text --> double)
    printf("DBL_MIN = %lg\n", DBL_MIN);             // 2.22507e-308
    printf("DBL_MAX = %lg\n", DBL_MAX);             // 1.79769e+308
}
