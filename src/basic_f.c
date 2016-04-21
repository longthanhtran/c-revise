#include <stdio.h>

int main()
{
  FILE *fp;
  int i;

  fp = fopen("foo.dat", "w");

  fprintf(fp, "\nSample Code\n\n");
  for (i = 0; i <= 10; i++)
    fprintf(fp, "i = %d\n", i);

  fclose(fp);

  return 0;
}
