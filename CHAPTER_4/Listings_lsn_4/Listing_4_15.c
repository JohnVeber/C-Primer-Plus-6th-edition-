/* input.c -- situations when a & symbol should be used */

#include <stdio.h>

int main(void){
	int age; // variable
	float assets; // also variable
	char pet[30]; // string

	printf("Enter information about your age, bank balance and favorite animal.\n");
	scanf("%d %f", &age, &assets); // A & symbol must be specified here
	scanf("%s", pet); // A & symbol don't needed
	printf("%d $%.2f %s\n\n\n", age, assets, pet);	

	return 0;
}

//Note 1.
// You can enter your input in a one row (usign 2 spaces and one Enter in the end)
// Or you can confirm each of input values by pressing Enter.

// Note 2.
// There is one exception from Note 1: %c specifier of scanf(). It "reads" space-characters as well.
