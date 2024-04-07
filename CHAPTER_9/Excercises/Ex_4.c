// Ex_4.c Harmonic mean of two numbers

#include <stdio.h>
int har_mean(double x, double y);

int main(void){
    double r = har_mean(2.0, 1.0);
    printf("%f\n\n\n", r);
    return 0;
}
int har_mean(double x, double y){
    double result;
    result = (2.0 / ((1.0 / x) + (1.0 / y)));
    return result;
}
