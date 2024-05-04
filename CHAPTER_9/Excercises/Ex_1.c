/* Ex_1.c -- a function that returns the lower of two of "double" type  values. */ 

#include <stdio.h>

double min(double x, double y);

int main(void){
	double first, second;
	printf("Enter a pair of double values, please:\n");
	scanf("%lf %lf", &first, &second);
	
	printf("Variables before function are:\
	 first = %f, second = %f\n\n\n", first, second);

	printf("Min of them is: %f\n\n\n", min(first, second));

	return 0;
}

double min(double x, double y){
	if (x > y)
		return y;
	else
		return x;
}
