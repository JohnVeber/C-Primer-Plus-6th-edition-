/* Ex_8.c -- raising numbers to integer (positive and negative) powers. */

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
    int i;
    /* First group of cases (n != 0).*/
    if((n != 0) && (p > 0)){
        for(i = 1; i <= p; i++)
            pow *= n;
        return pow;
    }
    else if((n != 0) && (p < 0)){
        for(i = 1; i <= (-p); i++)
            pow *= n;
        return (1/pow);
    }
    else if((n != 0) && (p = 0)){
        return 1;
    }
    /* Second group of cases (n == 0)*/
    if((n == 0) && (p != 0)){
	    printf("Zero to any power other than zero is zero.\n");
        return 0;
    }
    else
	    printf("The result is undefined. We use 1 as result.\n");
        return 1;
}
