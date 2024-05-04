/* Ex_4.c Harmonic mean of two numbers. */ 

#include <stdio.h>

double har_mean(double x, double y);

int main(void){
    double r = har_mean(5.0, 6.0);
    printf("%.2f\n\n\n", r);
    return 0;
}
double har_mean(double x, double y){
    double result;
    result = (2.0 / ((1.0 / x) + (1.0 / y)));
    return result;
}

// Note 1. This program isn't interactive, but vorks propertly.
// In the output you will see one very popular caliber ).
