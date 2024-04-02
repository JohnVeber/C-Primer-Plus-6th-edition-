/* 4.16 warwid.e -- Using a variable width output field */

#include <stdio.h>

int main(void){
	unsigned wigth, presicion;
	int number = 256;
	double weight = 242.5;

	printf("Enter the field width:\n");
	scanf("%d", &wigth);
	printf("Value is: %*d:\n",wigth,number);
	printf("Now enter width and precision:\n");
	scanf("%d %d", &wigth, &presicion);
	printf("Weight = %*.*f\n", wigth, presicion, weight);
	printf("Done!\n\n\n");

	return 0;
}
