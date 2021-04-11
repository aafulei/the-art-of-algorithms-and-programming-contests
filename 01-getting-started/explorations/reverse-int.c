// 123 --> 321
// 1230 --> 0321

#include <stdio.h>

void reverse(int num)
{
    int res = 0, cnt = 0;
    for (int zro = 1, rem; num; num /= 10) {
        rem = num % 10;
        if (zro && rem == 0) {
            zro = 1;
            cnt++;
        }
        else
            zro = 0;
        res *= 10;
        res += rem;
    }
    while (cnt-- > 0)
        putchar('0');
    printf("%d\n", res);
}

int main()
{
    reverse(0);
    reverse(1);
    reverse(123);
    reverse(1230);
    return 0;
}
