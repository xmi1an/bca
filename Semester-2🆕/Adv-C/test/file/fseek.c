  #include <stdio.h>
  int main()
  {
    FILE *fp;

    fp = fopen("example.txt", "r");
    if (fp == NULL)
    {
      printf("Error: could not open file\n");
      return 1;
    }

    printf("Current file position: %ld\n", ftell(fp));

    fseek(fp, 5, SEEK_SET); // Same as fseek(fp, 5, 0);

    printf("Current file position after fseek: %ld\n", ftell(fp));

    fclose(fp);
  }
