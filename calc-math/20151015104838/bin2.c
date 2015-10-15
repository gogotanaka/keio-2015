// C99でお願いします。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN (100)

int a[MAXN];
int rec(int d, int n);

int
main(void)
{
  int n;

  scanf("%d", &n);

  rec(1, n);
  return(0);
}

int
rec(int d, int n)
{
  if (d > n) {
    for (int i = 0; i <= n-1; i++) {
      printf("%d", a[i]);
    }
    printf("\n");
  } else {
    a[d-1] = 0;
    rec(d+1, n);
    a[d-1] = 1;
    rec(d+1, n);
  }
}
