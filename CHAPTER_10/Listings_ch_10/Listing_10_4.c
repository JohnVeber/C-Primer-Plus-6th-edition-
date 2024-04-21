// day_mon2.c -- we provide the compiler an opportunity\
to count quantity of the array elements.

#include <stdio.h>

int main(void){
    const int days[] = {31,28,31,30,31,30,31,31,30,31}; 
    int index;

    // sizeof days - size of array in bytes
    // sizeof days[0] - size of one particular element of array in bytes
    for (index = 0; index < sizeof days / sizeof days[0]; index++ )
        printf ("A %-3d month has %2d days\n",
         index + 1, days[index]); // %-3d just fo align output

    return 0;
}

// Pros:
// Useful. Not neccesary to count elements.

// Cons:
// Dangerous. Errors in quantity of elements could be missed during an automatic counting.