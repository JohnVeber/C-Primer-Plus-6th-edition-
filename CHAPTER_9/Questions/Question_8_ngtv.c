// Question_8_ngtv.c -- function which return MAX of three values
// This version shall work correctly with signed and unsigned integers

#include <stdio.h>

int max_of_3(int *x, int *y, int *z);

int main(void){
	signed int first, second, third;
	printf("Enter threre integer values, please:\n");
	scanf("%d %d %d", &first, &second, &third);
	
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
