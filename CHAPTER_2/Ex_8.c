// Ex.8

#include <stdio.h>

void one_three(void); // The first prototype (function declaration)
void two(void); // The 2nd prototype (function declaration)

int main(void){
    printf("Get started:\n");
    one_three(); // Call of the 1st func
    printf("Good!\n\n");
    return 0;
}

// (1st function definition)
void one_three(void){
    printf("One\n");
    two (); // Call of the 2nd func
    printf("Three\n");
}

// (2nd function definition)
void two(void){
    printf("Two\n");
}
