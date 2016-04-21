#include <stdio.h>
#include <string.h>

int n_char(char string[]);

int main()
{
  int n;
  char string[50];

  strcpy(string, "Hello World");

  n = n_char(string);
  printf("Length of string = %d\n", n);

  return 0;
}

int n_char(char string[])
{
  int n;

  n = strlen(string);
  if ( n > 50 )
    printf("String is longer than 50 characters");

  return n;
}
