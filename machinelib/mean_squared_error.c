#include <stdlib.h>
#include <stdio.h>

double mean_squared_error(double* predictions, double* targets, int size)
{
	double res=0.0;
	int i=0;
	if (size == 0) return 0.0;
	while(i<size)
	{
		double error = targets[i]-predictions[i];
		res += error *error;
		i++;
	}
	return res/size;
}
/*
int main()
{
	// Example predictions and targets
    	double predictions[] = {2.5, 0.0, 2.1, 7.3};
   	 double targets[] = {3.0, -0.5, 2.0, 7.0};
    	int size = sizeof(predictions) / sizeof(predictions[0]);

    // Calculate Mean Squared Error
    	double mse = mean_squared_error(predictions, targets, size);

        printf("Mean Squared Error: %.4f\n", mse); 
}


*/
