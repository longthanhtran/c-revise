#include <stdio.h>
#include <string.h>

int main()
{
  char text_1[100], text_2[100], text_3[100];
  char *ta, *tb;
  int i;

  char message[] = "Hello, I am a string; what are you?";

  printf("Original message: %s with length of %lu\n", message, strlen(message));

  i = 0;
  while ( (text_1[i] = message[i] ) != '\0' )
    i++;

  printf("text_1: %s\n", text_1);

  ta = message;
  tb = text_2;

  while ( ( *tb++ = *ta++ ) != '\0' )
    ;

  printf("text_2: %s\n", text_2);
}
