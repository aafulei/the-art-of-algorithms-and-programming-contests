#include <stdio.h>

void triangle(int n)
{
  for (int i = 0, j; i < n; ++i) {
    j = i;
    while (j--)
      putchar(' ');
    j = 2 * (n - i) - 1;
    while (j--)
      putchar('#');
    putchar('\n');
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  triangle(n);
  return 0;
}
