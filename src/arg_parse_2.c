#include <stdio.h>
#include <stdlib.h>

void get_args(int argc, char** argv, int* a_value, float* b_value);

int main(int argc, char** argv)
{
  int a = 0;
  float b = 0.0;

  get_args(argc, argv, &a, &b);

  printf("a = %d\n", a);
  printf("b = %f\n", b);
  return 0;
}

void get_args(int argc, char** argv, int* a_value, float* b_value)
{
  int i;

  for (i = 1; i < argc; i++)
  {
    if (argv[i][0] == '-') {
      switch (argv[i][1]) {
        case 'a': *a_value = atoi(argv[++i]);
                  break;

        case 'b': *b_value = atof(argv[++i]);
                  break;

        default: fprintf(stderr, "Unknown switch %s\n", argv[i]);
      }
    }
  }
}
