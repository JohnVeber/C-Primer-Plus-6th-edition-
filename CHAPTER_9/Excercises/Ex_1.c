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

double min(double x, double y){ // int type of returned value of this function was a mistake 1
	if (x > y)
		return y;
	else
		return x;
	// return 0; it was mistake 2
}

// Bug 1.
// Incorrect result with two negative values

// Попробовать сравнить отдельно положительные и отрицательные
// Ниндзя предложил убрать else и безусловно вернуть у если х не был возвращен!