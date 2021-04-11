// 鸡兔同笼，共n只，脚共m只，问鸡、兔各几只？

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n >= 0 && m % 2 == 0 && 2 * n <= m && m <= 4 * n)
        printf("%d %d\n", (4 * n - m) / 2, (m - 2 * n) / 2);
    else
        printf("no answer\n");
    return 0;
}
