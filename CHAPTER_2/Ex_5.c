// Ex.5

#include <stdio.h>

void br(void); // The first prototype (function declaration)
void ic(void); // The 2nd prototype (function declaration)

int main(void){    
    br(); // Call of the 1st func 1st time
    printf(", ");
    ic(); // Call of the 2nd func
    printf("\n");
    ic();
    printf(",\n");
    br(); 
    printf("\n\n"); // just to separate output from sequent messages
    return 0;
}

// (1st function definition)
void br(void){
    printf("Brasil, Russia");
}

// (2nd function definition)
void ic(void){
    printf("India, China");
}
