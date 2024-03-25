#include <stdio.h>

void one_three (void); // The first prototype (function declaration)
void two (void); // The 2nd prototype (function declaration)

int main (void)
{
    printf("начинаем:\n");
    one_three(); // Call of the 1st func
    printf("порядок!");
    return 0;
}

void one_three (void) // (1st function definition)
{
    printf("Один\n");
    two (); // Call of the 2nd func
    printf("Три\n");
}

void two (void) // (2nd function definition)
{
    printf("Два\n");
}