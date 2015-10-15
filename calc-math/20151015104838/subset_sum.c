// c99でお願いします.
#include <stdio.h>
#include <math.h>

#define ARRAY_LEN(arr) (sizeof(arr) / sizeof((arr)[0]))

int bin(int t, int n);
int rec(int d, int n);
void printIntAry(int *a);

int a[100];

int
main(int argc, char* argv[])
{
  // int n = 10;
  // for (int i = 0; i <= pow(2, n)-1; i++) {
  //   BIN(i, n);
  //   printf("\n");
  // }
  rec(1, 10);
  return(0);
}

// makes t into n digit binary.
// int
// bin1(int t, int n)
// {
//   int a[n];
//   for (int i = 0; i <= n-1; i++) {
//     a[n-i-1] = t % 2;
//     t /= 2;
//   }
//   for (int i = 0; i <= n-1; i++) {
//     printf("%d", a[i]);
//   }
// }

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


// （符号あり）int型は通常4byte、32bit
