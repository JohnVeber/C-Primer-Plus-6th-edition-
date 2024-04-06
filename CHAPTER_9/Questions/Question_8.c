// Question_8.c -- function which return MAX of three values
// This version shall work correctly with insigned integers

#include <stdio.h>

int max_of_3(int *x, int *y, int *z);

int main(void){
	int first, second, third;
	printf("Enter threre integer values, please:\n");
	scanf("%u %u %u", &first, &second, &third);
	
	printf("Variables before function are:\
	 first = %d, second = %d, third = %d\n\n\n", first, second, third);

	printf("MAX value is: %d\n\n\n", max_of_3(&first, &second, &third));

	return 0;
}

int max_of_3(int *x, int *y, int *z){
	if (*x > *y && *x > *z)
		return *x;
	else if (*x < *z)
		return *z;
	else
		return *y;
	return 0;
}

// This program handles negative arguments incorrectly