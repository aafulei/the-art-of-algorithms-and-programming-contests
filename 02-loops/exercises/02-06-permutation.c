#include <stdio.h>

int check(int abc)
{
  int def = abc * 2;
  int ghi = abc * 3;
  int arr[10] = { 0 };
  int a, b, c, d, e, f, g, h, i;

  a = abc / 100;
  abc -= a * 100;
  b = abc / 10;
  abc -= b * 10;
  c = abc;

  d = def / 100;
  def -= d * 100;
  e = def / 10;
  def -= e * 10;
  f = def;

  g = ghi / 100;
  ghi -= g * 100;
  h = ghi / 10;
  ghi -= h * 10;
  i = ghi;

  ++arr[a];
  ++arr[b];
  ++arr[c];
  ++arr[d];
  ++arr[e];
  ++arr[f];
  ++arr[g];
  ++arr[h];
  ++arr[i];

  for (int i = 1; i <= 9; ++i)
    if (arr[i] != 1)
      return 0;
  return 1;
}

int main()
{
  for (int abc = 123; abc <= 321; ++abc) {
    if (check(abc))
      printf("%d %d %d\n", abc, abc * 2, abc * 3);
  }
  return 0;
}
