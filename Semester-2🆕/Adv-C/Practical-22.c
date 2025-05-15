
#include <stdio.h>

/*creating UDF which is to be called to add two matrices*/

/*cell is the type of an element of a matrix; remember that each cell is a number. Since each cell is like a int, we declare cell as int*/

typedef int cell;

/* num_rows and num_cols are int variables, which are used to keep track of the number of rows and columns of the matrices respectively */

void Add_Matrix(int num_rows, int num_cols, cell matrix1[num_rows][num_cols], cell matrix2[num_rows][num_cols], cell matrix3[num_rows][num_cols])
{
  int i, j;

  /*for each element in the matrix, it's sum is calculated and put into the resulting matrix */
  for (i = 0; i < num_rows; i++)
    for (j = 0; j < num_cols; j++)
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
}

/*Main function, where program execution begins*/

int main()
{
  int num_rows, num_cols;

  /*reading the number of rows and columns of matrix 1 and matrix 2*/
  printf("Enter number of rows of matrices: ");
  scanf("%d", &num_rows);
  printf("Enter number of columns of matrices: ");
  scanf("%d", &num_cols);

  /* matrix 1, matrix 2 and matrix 3 are declared*/
  cell matrix1[num_rows][num_cols], matrix2[num_rows][num_cols], matrix3[num_rows][num_cols];

  /* taking elements of both the matrices from user*/
  for (int i = 0; i < num_rows; i++)
  {
    for (int j = 0; j < num_cols; j++)
    {
      printf("Enter matrix 1 elements: ");
      scanf("%d", &matrix1[i][j]);
    }
  }

  for (int i = 0; i < num_rows; i++)
  {
    for (int j = 0; j < num_cols; j++)
    {
      printf("Enter matrix 2 elements: ");
      scanf("%d", &matrix2[i][j]);
    }
  }

  /*calling the UDF to add the two matrices*/
  Add_Matrix(num_rows, num_cols, matrix1, matrix2, matrix3);

  /*printing the resultant matrix*/
  printf("Resultant matrix is: \n");
  for (int i = 0; i < num_rows; i++)
  {
    for (int j = 0; j < num_cols; j++)
    {
      printf("%d ", matrix3[i][j]);
    }
    printf("\n");
  }

  return 0;
}
