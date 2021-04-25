#include <stdio.h>

double sum(int n, int m)
{
  if (n > m)
    return sum(m, n);
  double res = 0;
  for (long long i = n; i <= m; ++i) {
    res += 1.0 / (i * i);
  }
  return res;
}

int main()
{
  int n, m;
  while (1) {
    scanf("%d%d", &n, &m);
    if (n == 0 && m == 0)
      break;
    double res = sum(n, m);
    printf("%.5lf\n", res);
  }
  return 0;
}
