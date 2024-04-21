// designate.c -- using designated initializers.

#include <stdio.h>
#define MONTHS 12

int main(void){
    int days[MONTHS] = {31,28,[4] = 31,30,31,[1] = 29}; 
    int i;

    for (i = 0; i < MONTHS; i++ )
        printf ("A %-3d month has %2d days\n",
         i + 1, days[i]); // %-3d just fo align output

    return 0;
}

// gcc 12 supported this feature