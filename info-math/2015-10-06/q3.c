#include <stdio.h>
#include <math.h>

#define CALC_COUNT 100000
#define DIFF 0.00001

int main()
{
  double x;
  // float x;
  long i;
  x = 0.0;
  i = 0;
  while(i<CALC_COUNT) {
    x += DIFF;
    i += 1;
  }
  printf("\n");
  printf("i = %ld  x = %10.7lf  |error| = %10.7lf\n", i, x, fabs(1.0-x));
}


// %20.17f 20..桁数, 17..小数桁
