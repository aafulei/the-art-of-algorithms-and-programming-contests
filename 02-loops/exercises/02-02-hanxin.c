#include <stdio.h>

int main()
{
  int a, b, c, found;
  while (scanf("%d%d%d", &a, &b, &c) == 3) {
    found = 0;
    for (int n = 10; n < 100; n++) {
      if (n % 3 == a && n % 5 == b && n % 7 == c) {
        printf("%d\n", n);
        found = 1;
        break;
      }
    }
    if (!found)
      printf("No answer\n");
  }
  return 0;
}
