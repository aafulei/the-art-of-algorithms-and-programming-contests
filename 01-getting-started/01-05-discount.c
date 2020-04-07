#include <stdio.h>

int main()
{
    int n;
    float sum;
    scanf("%d", &n);
    sum = n * 95.0;
    if (sum >= 300)
        printf("%.2f\n", sum * 0.85);
    else
        printf("%.2f\n", sum);
    return 0;
}
