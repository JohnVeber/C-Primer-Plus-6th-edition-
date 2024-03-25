// Ex.4

#include <stdio.h>

void jolly (void); // The first prototype (function declaration)
void deny (void); // The 2nd prototype (function declaration)

int main (void){
    jolly(); // Call of the 1st func 1st time
    jolly();
    jolly();
    deny(); // Call of the 2nd func
    return 0;
}

// (1st function definition)
void jolly (void){
    printf("Он веселый молодец!\n");
}

// (2nd function definition)
void deny (void){
    printf("Никто не может это отрицать!\n\n");
}
