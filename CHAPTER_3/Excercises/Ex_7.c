// Ex. 7 -- height calculator.
#include <stdio.h>
int main(void){
    const float cmperinch = 2.54;
    float height;
    printf("Enter your height in inches: \n");
    scanf("%f", &height);  // Note! No negative values expected.
    printf("\nYour height in santimeters are %f.\n\n\n", cmperinch*height); 
    
    return 0;
}

// Problems found:
// 1. Negative values aren't check, but leads to incorrect results. 