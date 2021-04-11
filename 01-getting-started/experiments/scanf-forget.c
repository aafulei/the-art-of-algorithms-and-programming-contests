#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", a, b);        // segmentation fault
    printf("%d\n", a + b);
    return 0;
}
