

//Good morning! Today we are going to learn how to create matrix objects in cpp! 

#include <iostream> 

//We will begin by introducing our matrix class
class Matrix
{
private:
    //Declare the variables we will be using
    int rows;
    int columns;
    int **matrix;

public:
    //Create a constructor that will take two parameters (number of rows and columns) to set up our matrix
    Matrix(int rows_, int columns_)
    {
        //Set the rows and columns equal to the parameters that were passed in
        rows = rows_;
        columns = columns_;

        //Allocate memory for our matrix
        matrix = new int*[rows];

        for (int i = 0; i < rows; i++)
        {
            matrix[i] = new int[columns];
        }
    }

    //Create a function that will set the value of a particular element  in our matrix 
    void setElementAt(int row, int column, int value)
    {
        //Set the value of the specified column and row equal to value
        matrix[row][column] = value;
    }

    //Create a function that will return the value of the element at a particular row and column
    int getElementAt(int row, int column)
    {
        //Return the value of the specified row and column 
        return matrix[row][column];
    }

    //Create the destructor for our matrix class 
    ~Matrix()
    {
        //Clean up memory of our matrix
        for (int i = 0; i < rows; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
}; 

//Let's try using our class 

int main() 
{ 
    //Create a new matrix with 2 rows and 3 columns 
    Matrix matrix(2, 3); 

    //Set the value of the first row, first column to 5 
    matrix.setElementAt(0, 0, 5); 

    //Print out the value of the first row, first column 
    std::cout << matrix.getElementAt(0, 0) << std::endl; 

    return 0; 
}