#include <stdio.h>

int main()
{
  for (int i = 100, a, b, c, n; i <= 999; ++i) {
    n = i;
    a = n / 100;
    n -= 100 * a;
    b = n / 10;
    n -= 10 * b;
    c = n;
    if (a * a * a + b * b * b + c * c * c == i)
      printf("%d\n", i);
  }
  return 0;
}
