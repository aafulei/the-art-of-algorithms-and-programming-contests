#include <stdio.h>

void print(double a, int b, int c)
{
    char spec[10];
    sprintf(spec, "%%.%df\n", c);
    printf(spec, a / b);
}

int main()
{
    int a, b, c;
    while (1) {
        scanf("%d%d%d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;
        print(a, b, c);
    }
    return 0;
}
