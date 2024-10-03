#include <math.h>


double binary_cross_entropy(double* predictions, double* targets, int size)
{
	int i=0;
	double j=0.0;
	while(i<size)
	{
		double pred = predictions[i];
		double target = targets[i];
		j += target * log(fmax(pred, 1e-15)) + (1 - target) * log(fmax(1 - pred, 1e-15));
		i++;
	}
	return (-1.0/size)*j;
}

/*
#include <stdio.h>
int main()
{
	double predictions[] = {0.9, 0.1, 0.8, 0.4};
	double targets[] = {1, 0, 1, 0};
	int size = 4;
	double bce_result = binary_cross_entropy(predictions, targets, size);
	printf("Binary Cross Entropy: %f\n", bce_result);
}
*/
