#include <stdio.h>

void br (void); // The first prototype (function declaration)
void ic (void); // The 2nd prototype (function declaration)

int main (void)
{
    
    br(); // Call of the 1st func 1st time
    printf(",");
    ic(); // Call of the 2nd func
    printf("\n");
    ic();
    printf(",\n");
    br(); 
    return 0;
}

void br (void) // (1st function definition)
{
    printf("Бразилия, Россия");
}

void ic (void) // (2nd function definition)
{
    printf("Индия, Китай");
}