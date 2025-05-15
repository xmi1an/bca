#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fPointer;
  fPointer = fopen("example.txt", "r"); // opening file

  if (fPointer == NULL)
  {
    printf("Can not Open File..");
    exit(1);
  }

  fputc('A', fPointer);
  int checkErr = ferror(fPointer);
  if (checkErr == 0)
    printf("Succes");
  else
    printf("Read or Write Error has occured");

  fclose(fPointer);

  return 0;
}
