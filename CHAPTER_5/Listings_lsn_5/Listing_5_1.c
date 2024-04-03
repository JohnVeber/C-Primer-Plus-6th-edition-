// talkback.c -- converts shoe size.

#include <stdio.h>
#define ADJUST 7.31              /* One of the symbolic const type*/ 

int main(void){
	const double SCALE = 0.333;  /* One more type of symbolic const */
	double shoe, foot;
	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;

	printf("Size of shoes (man)       foot length.\n");
	printf("%10.1f %20.2f inches\n\n\n", shoe, foot);

	return 0;
}
