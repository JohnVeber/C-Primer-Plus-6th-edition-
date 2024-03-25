#include <stdio.h>

void smile (void); // Function declaration

int main (void)
{
    smile(); 
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile(); 
    return 0;
}

void smile (void) // (1st function definition)
{
    printf("Улыбайся!");
}
