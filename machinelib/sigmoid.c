#include <math.h>

double sigmoid(double x)
{
	double i= exp(-x);
	double s= 1/(1+i);
	return s;
}


/*
#include <stdio.h>



int main()
{
    double s;

    // Test case 1
    s = sigmoid(10);
    printf("Sigmoid(10.00) = %.5f, Expected: 0.99995\n", s);

    // Test case 2
    s = sigmoid(0);
    printf("Sigmoid(0.00) = %.5f, Expected: 0.50000\n", s);

    // Test case 3
    s = sigmoid(-10);
    printf("Sigmoid(-10.00) = %.5f, Expected: 0.00005\n", s);

    // Test case 4
    s = sigmoid(1);
    printf("Sigmoid(1.00) = %.5f, Expected: 0.73106\n", s);

    // Test case 5
    s = sigmoid(-1);
    printf("Sigmoid(-1.00) = %.5f, Expected: 0.26894\n", s);

    return 0;
}*/
