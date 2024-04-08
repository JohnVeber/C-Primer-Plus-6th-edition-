// Ex_1.c -- a function that returns the lower of two of "double" type  values 

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

double min(double x, double y){ // int type of returned value of this function was my mistake 1
	if (x > y)
		return y;
	else
		return x;
	// return 0; it was my mistake 2
}

