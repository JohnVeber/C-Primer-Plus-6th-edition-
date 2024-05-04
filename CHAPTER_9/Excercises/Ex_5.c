/* Ex_5.c -- a "larger_of" function that changes values of a pair of variables in calling function. */

#include <stdio.h>

void larger_of(double *u, double *v);

int main(void){
	double x = -126.0, y = -12.0;

    printf("Initially x = %.2f and y = %.2f\n", x, y);
    larger_of(&x, &y);
    printf("Now x = %.2f and y = %.2f\n", x, y);
    printf("\n\n\n");
	return 0;
}

void larger_of(double *u, double *v){
    if(*u > *v)
        *v = *u;
    else
        *u = *v;
}
