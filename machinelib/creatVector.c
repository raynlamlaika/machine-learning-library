#include<stdlib.h>
#include<stdio.h>
double* create_vector(int size)
{
    double* vec = (double*)malloc(sizeof(double)*size);
    int i = 0 ;
    if(vec)
        while(i < size)
        {
            vec[i]= 0.0;
            i++;
        }
    return vec;
}
/*
int main()
{
    int  i =0, y=8;
    double* d = create_vector(y);
    while(i < y)
    {
        d[i]=i+1.0;
        printf("%f ",d[i]);
        i++;
    }
    
}*/