#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double* softmax(double* logits, int size)
{
	double* rs= (double*) malloc(sizeof(double)*size);
	if(!rs)
		return 0;
	double max=logits[0];
	int i =1;

	while(i <size)
	{
		if(logits[i] > max)
			max =logits[i];
		i++;
	}
	


	double sum_exp = 0.0;
	i = 0;
	while (i < size) 
	{
		rs[i] = exp(logits[i] - max);
		sum_exp += rs[i];
		i++;
	}
	i = 0;
	while (i < size) {
		rs[i] /= sum_exp;
		i++;
	}
	return rs;
}



/*

int main() {
    double logits[] = {2.0, 1.0, 0.1};
    int size = sizeof(logits) / sizeof(logits[0]);
    double* probabilities = softmax(logits, size);

    if (probabilities) {
        for (int i = 0; i < size; i++) {
            printf("Probability of class %d: %f\n", i, probabilities[i]);
        }
        free(probabilities);  // Don't forget to free the allocated memory!
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}




*/




