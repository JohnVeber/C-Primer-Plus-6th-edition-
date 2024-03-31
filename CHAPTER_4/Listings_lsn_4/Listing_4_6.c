/* printout.c -- uses some conversion specifiers */

#include <stdio.h>
#define PI 3.141593

int main(void){
	int number = 7;
	float pies = 12.75;
	int cost = 7800;
	printf("%d competition participants ate %f cherry pies.\n", number, pies);
	printf("The value of pi is %f.\n", PI);
	printf("Goodbye! Your art costs too much,\n");
	printf("%c%d\n\n\n", '$',2*cost);

	return 0;
}
