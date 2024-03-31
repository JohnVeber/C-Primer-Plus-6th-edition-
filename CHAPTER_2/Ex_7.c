// Ex.7

#include <stdio.h>

void smile(void); // Function declaration

int main(void){
    smile(); 
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n\n"); //Just to separate output
    return 0;
}

// (1st function definition)
void smile(void){
    printf("Smile!");
}

