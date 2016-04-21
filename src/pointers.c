#include <stdio.h>

int main()
{
  float x, y;
  float *fp, *fp2;

  x = 6.5;
  printf("Value of x is %f, address of x %ld\n", x, &x);

  fp = &x;
  printf("Value in memory location fp is %f\n", *fp);

  *fp = 9.2;
  printf("New value of x is %f = %f \n", *fp, x);

  *fp = *fp + 1.5;
  printf("Final value of x is %f = %f \n", *fp, x);

  y = *fp;
  fp2 = fp;
  printf("Transfered value into y = %f and fp2 = %f \n", y, *fp2);

  return 0;
}
