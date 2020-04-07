#include <stdio.h>
#define CUBE(x) ((x) * (x) * (x))

int main()
{
    for (int i = 100, a, b, c; i <= 999; i++) {
        a = i / 100;
        c = i % 10;
        b = (i - a * 100 - c) / 10;
        if (a*a*a + b*b*b + c*c*c == i)
            printf("%d\n", i);
    }
    return 0;
}
