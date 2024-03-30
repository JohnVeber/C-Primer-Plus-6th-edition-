// Ex. 6 -- water calculator
#include <stdio.h>
int main(void){
    const double m_mass = 3.0e-23;
    const float q_mass = 950;
    float volume;

    printf("Enter any amoutn of water in quarters: \n");
    scanf("%f", &volume);  // Note! No negative values expected.
    printf("\nThere are %.2f molecules of water in %.2f quarts.\n\n\n", volume*(q_mass/m_mass), volume); 
    return 0;
}

// Problems found:
// 1. Negative values aren't check, but leads to incorrect results. 