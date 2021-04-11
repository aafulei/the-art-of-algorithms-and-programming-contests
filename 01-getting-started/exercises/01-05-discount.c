#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float sum = 95 * n;
    if (sum >= 300)
        printf("%.2f\n", sum * 0.85);
    else
        printf("%.2f\n", sum);
    return 0;
}
