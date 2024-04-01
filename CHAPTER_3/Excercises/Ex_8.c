// Ex. 8 -- cups calculator )).
#include <stdio.h>
int main(void){
    int cups; // To save input result
    float pints, ounces, tablespoons, teaspoons;
    printf("Enter a volume in cups needed: \n");
    scanf("%u", &cups);  // Note! No negative values expected.
    
    pints = cups / 2;
    ounces = cups * 8;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3; 

    printf("\nIn %d cups there are:\n %-10.2f pints\n%-10.2f ounces\
    \n%-10.2f tablespoons\n%-10.2f teaspoons.\n\n\n", cups, pints, ounces, tablespoons, teaspoons); 
    
    return 0;
}

// Problems found:
// 1. Negative values aren't check, but leads to incorrect results. 

