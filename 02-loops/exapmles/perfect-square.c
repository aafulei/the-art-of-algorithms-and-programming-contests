// find all perfect sqaures with form aabb

#include <stdio.h>
#include <math.h>

int solve1()
{
    for (int a = 1; a <= 9; ++a)
        for (int b = 0; b <= 9; ++b) {
            int num = 1100 * a + 11 * b;
            // integer root, considering floating-point errors
            int irt = floor(sqrt(num) + 0.5);
            if (irt * irt == num)
                printf("%d\n", num);
        }
    return 0;
}

int solve2()
{
    for (int num = 1; ; ++num) {
        int square = num * num;
        if (square < 1000)
            continue;
        if (square > 9999)
            break;
        int lo = square % 100;
        int hi = square / 100;
        if (lo / 10 == lo % 10 && hi / 10 == hi % 10)
            printf("%d\n", square);
    }
}

int main()
{
    // solve1();
    solve2();
}
