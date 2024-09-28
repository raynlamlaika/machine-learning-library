#include <stdio.h>
#include <stdlib.h>


double** add_matrices(double** A, double** B, int rows, int cols)
{
	double** mtx = (double**)malloc(sizeof(double*)*(rows));
	int i = 0 , y=0;
	int u = 0;
	while(i < rows)
	{
		mtx[i] = (double*) malloc(cols* sizeof(double*));
		i++;

	}

	i =0;
	while(i < rows)
	{
		y= 0;
		while(y < cols)
		{ 
		     	mtx[i][y] =A[i][y]+B[i][y];
			y++;
		}
		i++;
	}
	return mtx;
}


/*
int main() {
    int rows = 2, cols = 2;

    // Example matrices
    double** A = (double**)malloc(rows * sizeof(double*));
    double** B = (double**)malloc(rows * sizeof(double*));

    for (int i = 0; i < rows; i++) {
        A[i] = (double*)malloc(cols * sizeof(double));
        B[i] = (double*)malloc(cols * sizeof(double));
    }

    // Initialize matrices A and B
    A[0][0] = 1.0; A[0][1] = 2.0;
    A[1][0] = 3.0; A[1][1] = 4.0;

    B[0][0] = 5.0; B[0][1] = 6.0;
    B[1][0] = 7.0; B[1][1] = 8.0;

    // Add matrices
    double** result = add_matrices(A, B, rows, cols);

    // Print result matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%.2f ", result[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(A[i]);
        free(B[i]);
        free(result[i]);
    }
    free(A);
    free(B);
    free(result);

    return 0;
}*/
