// day_mon3.c -- using a notation form with pointers.

#include <stdio.h>
#define MONTHS 12

int main(void){
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31}; 
    int index;

    for (index = 0; index < MONTHS; index++ )
        printf ("A %-3d month has %2d days\n", index + 1, *(days + index)); 

    printf ("\n\n"); 
    return 0;
}

// *(days + index) is equial to days[index]