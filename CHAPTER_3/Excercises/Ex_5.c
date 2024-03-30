// Ex. 5 -- age calculator
#include <stdio.h>
int main(void){
    const double secperyear = 3.156E7;
    float age;
    
    printf("Enter your age in years: \n");
    scanf("%f", &age);  // Note! No negative values expected.
    printf("Your age in seconds is: %.2f\n\n\n", (secperyear*age)); 
    return 0;
}

// Problems found:
// 1. Negative values aren't check, but leads to incorrect results.