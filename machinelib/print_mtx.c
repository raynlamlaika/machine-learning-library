#include<stdio.h>

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

