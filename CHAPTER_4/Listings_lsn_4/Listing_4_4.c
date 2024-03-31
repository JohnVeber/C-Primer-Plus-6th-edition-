/* pizza.c -- uses constants defined in relation to pizza. */

#include <stdio.h>
#define PI 3.14159

int main(void){
	float area, circum, radius;
	printf("What is the radius of your pizza? \n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("Basic parameters of your pizza:\n");
	printf("Circumference = %1.2f, square = %1.2f\n\n\n", circum, area);

	return 0;
}
