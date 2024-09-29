#include <stdlib.h>
double* vector_addition(double* vec1, double* vec2, int size)
{
	int i=0;
	double* add = (double*)malloc(sizeof(double)*size);
	if(!add)
		return 0;
	while(size > i)
	{
		add[i]=vec1[i] + vec2[i];
		i++;
	}
	return add;
}	


/*
#include <stdio.h>


int main()
{
	double ve[]={1,2,3,4};
	int size = 4;
	double v[]= {1,2,3,4};

	 double* result = vector_addition(ve, v, size);

	 for (int i = 0; i < size; i++)
	 {
		 printf("%2.f ", result[i]);
	 }
	 free(result);

}
*/

