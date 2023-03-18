

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int *ptr = arr;

    printf("%d ", *(ptr + 1));

  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%d ", *(ptr + i));
  // }
  // printf("\n");

  return 0;
}
