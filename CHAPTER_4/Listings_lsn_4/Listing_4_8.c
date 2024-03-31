/* float.c -- some combinations for floating point types. */

#include <stdio.h>

int main(void){
	const double RENT = 3852.99;

	printf("Sample 1.   *%f*\n", RENT);
	printf("Sample 2.   *%e*\n", RENT);
	printf("Sample 3.   *%4.2f*\n", RENT);
	printf("Sample 4.   *%3.1f*\n", RENT); // Rounds to 3853
	printf("Sample 5.   *%10.3f*\n", RENT);
	printf("Sample 6.   *%10.3E*\n", RENT);// Rounds to 3853E+03
	printf("Sample 7.   *%+4.2f*\n", RENT); // Displays an algebraic sign for the number
	printf("Sample 8.   *%010.2f*\n\n\n", RENT);

    // My samples are listed below. Uncomment them if you wish to check output.
    // Sample A - for octal numbers.
    // int A = 100;
    // printf("My Sample A.   *%010of*\n\n\n", A); // My output is: *0000000144f*
       
	return 0;
}

// Note 1.
/* As you enter, be careful not to confuse the %o conversion specifier (for octal numbers)
 and the %0 specifier modifier (for outputting leading zeros).*/
// You can see example with explanation at my sample A above. 