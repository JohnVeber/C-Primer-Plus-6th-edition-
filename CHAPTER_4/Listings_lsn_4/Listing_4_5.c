/* defines.c -- uses named constants defined in the limits.h file
and type float. */

#include <stdio.h>
#include <limits.h>  // limits for integer numbers
#include <float.h>   // limits for floating point numbers

int main(void){
	printf("Some number limits for this system:\n");
	printf("Largest value of the int type: %d\n", INT_MAX);
	printf("Smallest value of the long long type: %lld\n", LLONG_MIN);
	printf("In this system, one byte is equal to %d bits\n", CHAR_BIT);
	printf("Largest value of the double type: %e\n", DBL_MAX);
	printf("Smallest normalized value of the float type: %e\n", FLT_MIN);
	printf("Float type value precision is: %d places\n", FLT_DIG);
	printf("Difference between 1.00 \
and a minimum float value which is greater than 1.00: %e\n\n\n", FLT_EPSILON);

	return 0;
}

/* Note 1. Largest value of the double type: 1.797693e+308

Powers of '2' number is assumed .*/