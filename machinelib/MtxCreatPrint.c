#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


double** create_matrix(int rows, int cols)
{
    double** mtx = (double**) malloc(sizeof(double*)*(rows));
    if(!mtx)
        return 0;
    mtx[0] =  (double*)malloc(sizeof(double)*(rows * cols));
    if(!mtx[0])
    {
        free(mtx);
        return 0;
    }
    int i=0;
    while(i<rows)
    {
        mtx[i] = mtx[0] + i * cols;
        i++;
    }
    return mtx;
}
void freee(double** mtx)
{
    if(mtx)
    {
        free(mtx[0]);
        free(mtx);
    }
}

void show_mtx(double** mtx,int rows , int cols)
{
    int i=0 ;
    int y= 0;
    while(i< rows)
    {
        y =0;
        while(y < cols)
        {
            printf("%.2f ",mtx[i][y]);
            y++;
        }
        write(1,"\n",1);
        i++;
    }    
}

/*
int main()
{
    int rows = 3;
    int cols = 3;
    
    double** matrix = create_matrix(rows, cols);
    if (!matrix)
    {
        return 1;
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = i + j;
        }
    }

    printf("Matrix:\n");
    show_mtx(matrix, rows, cols);

    freee(matrix);

    return 0;
}
*/