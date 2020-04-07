#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (m % 2 != 0 || m  < 2 * n || m > 4 * n)
        printf("No answer\n");
    else
        printf("%d %d\n", 2 * n - m / 2, m / 2 - n);
    return 0;
}
