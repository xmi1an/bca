#include <stdio.h>

void main()
{
  FILE *fp;
  int ch;
  fp = fopen("example.txt", "r");

  if (fp == NULL)
    perror("Error : ");
  else
  {
    printf("%c \n", getc(fp)); // 0
    printf("%c \n", getc(fp)); // 1
    printf("%c \n", getc(fp)); // 2
    printf("%c \n", getc(fp)); // 3
    printf("%ld\n", ftell(fp));
    // rewind(fp);
    // printf("\nAfter rewind %ld\n", ftell(fp));

    fseek(fp, 3, 2);

    printf("%ld\n", ftell(fp));
  }
}
