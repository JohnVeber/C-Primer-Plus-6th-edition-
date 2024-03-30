#include <stdio.h>
int main(void){
    float input;
    printf("Enter any floating point number: \n");
    scanf("%f", &input);  // Note! You need to use divider "." (not ",") during input.
    printf("I'm able to represent your input value by a few forms: \n\n");
    printf("1. As floating point value with fixed comma:   %f \n", input);
    printf("2. By exponential notation:   %e \n", input);
    printf("3. By binary-exponential notation:   %A \n\n\n", input); // Book pages 102 and 130 may be useful
    return 0;
}
