// day_mon1.c -- outputs a quantity of days in each month.

#include <stdio.h>
#define MONTHS 12

int main(void){
    const int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31}; // Use "const" to show\
    this array will not be changed
    int index;

    for (index = 0; index < MONTHS; index++ )
        printf ("A %-3d month has %2d days\n", index + 1, days[index]); // %-3d just fo align output

    return 0;
}