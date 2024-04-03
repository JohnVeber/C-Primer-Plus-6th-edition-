/* Ex.8 -- . */

#include <stdio.h>
#define GALLONSCOEFF 3.785 /* If you forgot to put a dot separator in this constant,
 the program will take the number as an int and will not work.!*/

int main(void){
	float miles, gallons;
	float kilometers, litres;
	const float MILESCOEFF = 1.609; /* This constant shows that a mile is equal to 1.609 km. */

    // Case 1.
	printf("Please enter the number of miles driven and the number of gallons of gas used.\n");
	scanf("%f%f", &miles, &gallons); /* My input:   10   3,5 */
	printf("You've traveled %.1f miles on a gallon of fuel.\n", miles/gallons ); // Rounding 2.857 --> 2.9
    /* Expected output is: 2.9 */

    // Case 2.
	kilometers = miles * MILESCOEFF; // Expected result: 16.09
	litres = gallons * GALLONSCOEFF; // Expected result: 13.2475
	printf("Your fuel consumption per\
     100 km is: %.1f liters.\n\n\n", litres*100/kilometers); // Rounding 82.333 --> 82.3
	/* Expected output is: 82.3 */

	return 0;
}
