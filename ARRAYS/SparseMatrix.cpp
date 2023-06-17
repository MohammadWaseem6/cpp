#include <iostream>
using namespace std;

void displayMatrix(int matrix[3][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix1[3][3] = {
        {1, 0, 0},
        {2, 0, 0},
        {4, 0, 0}};

    int matrix2[3][3] = {
        {0, 5, 0},
        {2, 0, 0},
        {4, 0, 0}};

    int rows = 3;
    int cols = 3;

    cout << "Matrix 1:\n";
    displayMatrix(matrix1, rows, cols);

    int zeroCount1 = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix1[i][j] == 0)
            {
                zeroCount1++;
            }
        }
    }

    if (zeroCount1 > (rows * cols) / 2)
    {
        cout << "Matrix 1 is a sparse matrix." << endl;
    }
    else
    {
        cout << "Matrix 1 is not a sparse matrix." << endl;
    }

    cout << "\nMatrix 2:\n";
    displayMatrix(matrix2, rows, cols);

    int zeroCount2 = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix2[i][j] == 0)
            {
                zeroCount2++;
            }
        }
    }

    if (zeroCount2 > (rows * cols) / 2)
    {
        cout << "Matrix 2 is a sparse matrix." << endl;
    }
    else
    {
        cout << "Matrix 2 is not a sparse matrix." << endl;
    }

    if (zeroCount1 > (rows * cols) / 2 && zeroCount2 > (rows * cols) / 2)
    {
        int sumMatrix[3][3];

        // Perform addition of matrices
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        cout << "\nSum of the two matrices:\n";
        displayMatrix(sumMatrix, rows, cols);
    }
    else
    {
        cout << "\nAddition not possible. At least one of the matrices is not sparse." << endl;
    }

    return 0;
}
