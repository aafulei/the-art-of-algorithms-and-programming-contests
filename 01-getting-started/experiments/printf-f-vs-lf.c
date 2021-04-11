/*  gcc -ansi -pedantic -Wall -Wextra
 *  warning: ISO C90 does not support the '%lf' gnu_printf / ms_printf format
 */

#include <stdio.h>

int main()
{
    double d;
    scanf("%lf", &d);
    printf("%f", d);
    printf("%lf", d);
    return 0;
}
