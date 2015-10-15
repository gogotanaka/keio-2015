#include <stdio.h>
#include <math.h>

#define N 100
#define X 8

double fract(int n) {
  return gamma((double)(n+1));
}

int main()
{
  double sum = 1.0;
  for (int i=1; i<=N; i++) {
    sum += pow(X,i)/fract(i);
  }
  printf("%1.36lf\n", 1/sum);
  printf("%1.36lf\n", exp(-8));
}
