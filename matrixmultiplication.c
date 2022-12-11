#include <stdio.h>

int main()
{
    //Declaring variables and matrice :-
    
    int matrix1[10][10];
    int matrix2[10][10];
    int matrix3[10][10];
    int r1, c1, r2, c2;
    
    //Asking user to input no. of rows and columns for both matrices :-

    printf("\n\n***Matrix Multiplication Program***\n\n");

    printf("Enter the no. of rows of Matrix A :");
    scanf("%d", &r1);

    printf("Enter the no. of columns of Matrix A");
    scanf("%d", &c1);

    printf("\n");

    printf("Enter the no. of rows of Matrix B :");
    scanf("%d", &r2);

    printf("Enter the no. of columns of Matrix B :");
    scanf("%d", &c2);
    
    //Used conditional statement to operate correct order of matrices :-

    if (c1 == r2)
    {
        //taking inputs for Matrix A :-
        
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter the A%d%d element of the matrix A\n\n", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }
        
        //taking inputs for Matrix B :-

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter the B%d%d element of the matrix B\n\n", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }
        
        //printing matrices to show the inputted values :-

        printf("\n\nMatrices are :\n");

        printf("Matrix A: \n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", matrix1[i][j]);
            }
            printf("\n");
        }

        printf("Matrix B: \n");

        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }
        
        //Multiplying the both Matrices :-

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                matrix3[i][j] = 0;
                for (int k = 0; k < r1; k++)
                {
                    matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
       
        //Printing Results :-

        printf("Matrix Multiplication is:\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", matrix3[i][j]);
            }
            printf("\n");
        }
    }

    else{
        printf("\nThis order of matrix cannot be multiplied. The no. of columns of matrix A must be similar to the no. of rows of second matrix B.\n");
    }

    return 0;
}
