double dot_product(double* vec1, double* vec2, int size)
{
	int i= 0;
	double dot= 0.0;
	while(i < size)
	{
		dot +=vec1[i] *vec2[i];
		i++;
	}
	return dot;
}
/*
int main()
{
	double v[]= {1,2,3};
	double vi[]={1,2,3};
	int size =3;
	double res=dot_product(v,vi,size);
	printf("dot is %lf",res);
}
*/


