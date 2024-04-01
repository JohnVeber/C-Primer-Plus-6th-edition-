/* prntval.c -- finding out a printf() function return value */

#include <stdio.h>

int main(void){
	int bph2o = 212;
	int rv;
	
	rv= printf("Water boils at %d degrees Fahrenheit.\n", bph2o);
	printf("The printf function have been output %d characters.\n\n\n",
     rv);

	return 0;
}
