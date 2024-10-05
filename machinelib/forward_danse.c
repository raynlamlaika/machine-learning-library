#include <stdio.h>
#include <stdlib.h>

double* creatV(int size)
{
	double *i = (double*)malloc(sizeof(double) * size);
	if (!i)
		return 0;
	int d = 0;
	while (d < size)
	{
		i[d] = 0.0;
		d++;
	}
	return i;
}

double* forward_dense(double** input, double** weights, double* bias, int input_size, int output_size)
{
	double* out = creatV(output_size);
	int i = 0;
	int j = 0;
	while(i < output_size)
	{
		out[i]= bias[i];
		j =0;
		while(j < input_size)
		{
			out[i] += input[0][j] *weights[j][i];
			j++;
		}
		i++;
	}
	return out;
}

/*
int main() {
    // Example usage

    // Input data (1 sample, 3 features)
    double* input[] = { (double[]){1.0, 2.0, 3.0} };

    // Weights (3 input features, 2 output neurons)
    double* weights[] = {
        (double[]){0.2, 0.8},
        (double[]){-0.5, 1.0},
        (double[]){0.3, 0.6}
    };

    // Bias (for 2 output neurons)
    double bias[] = {0.1, -0.3};

    int input_size = 3; // 3 input features
    int output_size = 2; // 2 output neurons

    // Perform forward pass
    double* result = forward_dense(input, weights, bias, input_size, output_size);

    // Print the result
    printf("Output: [ ");
    for (int i = 0; i < output_size; i++) {
        printf("%f ", result[i]);
    }
    printf("]\n");

    // Free allocated memory
    free(result);

     return 0;
}*/
