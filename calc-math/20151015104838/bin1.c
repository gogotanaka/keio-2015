// C99でお願いします。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAXN (30)

int n, a[MAXN];
int bin(int t, int n);

int
main(void)
{
  int i;

  scanf("%d", &n);

  for (i = 0; i < pow(2, n); i++) {
    bin(i, n);
  }
  return(0);
}

int
bin(int t, int n)
{
  int i;
  for (i = 0; i <= n-1; i++) {
    a[n-i-1] = t % 2;
    t /= 2;
  }
  for (i = 0; i <= n-1; i++) {
    printf("%d", a[i]);
  }
  printf("\n");
}
