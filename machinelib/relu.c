#include <stdio.h>
                      
double relu(double x)
{
	if (x<0)
		return 0;
	else
		return x;
}
