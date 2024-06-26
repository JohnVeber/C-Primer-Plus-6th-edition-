/* Ex_9.c -- Refactoring ex.8 with recursive function. */

#include <stdio.h>

double power(double n, int p);

int main(void)
{
	double x, xpow;
	int exp = 0;
	printf("Enter a number and positive integer power,\n");
	printf("to raise the number up. Press 'q' for program termination.\n");
    while(scanf("%lf%d",&x,&exp) == 2){
        xpow = power(x,exp);
	    printf("%.3g in power %d is %.5g\n", x, exp, xpow);
	    printf("Enter the next pair of numbers or 'q' for program termination\n");
    }
	printf("Hope you estimated this escsercise, goodbye!\n");
	return 0;
}

double power(double n, int p){
    double pow = 1;
    if(n != 0){
        if(p > 0){
            pow = n * power(n, (p-1));
        }
        else if(p < 0){
            pow = 1/(n * power(n, ((-p)-1)));
        }
        else
            pow = 1;
        return pow;
    }
    else if((n == 0)){
        if(p != 0){
	        printf("Zero to any power other than zero is zero.\n");
            return 0;
        }
        else
	        printf("The result is undefined. We use 1 as result.\n");
        return 1;
    }
}
