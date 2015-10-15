#include <stdio.h>
#include <math.h>

int main()
{
  int i = 1;
  long f = 1;
  double e = 1.0, t = 1.0;
  while (t > 1.0e-6) {
    f *= i;
    i += 1;
    t = 1.0 / f;
    e += t;
  }
  printf("aprox = %12.10f n = %3d \n", e, i);
  printf("funct = %12.10f \n", exp(1.0));
}
