// Ex.6

#include <stdio.h>
#define TWO 2

int main (void){
    int toes, toes_2, toes_sqrd;
    toes=10;
    toes_2=toes*TWO; //  Calculate a doubled value of "toes" variable
    toes_sqrd=toes*toes; //  Calculate a squared value of "toes" variable
    printf("This is a toes variable: %d,\nThis is it's  doubled value: %d,\n\
And this is it's value squared: %d.\n\n", toes, toes_2, toes_sqrd);
    return 0;
}

