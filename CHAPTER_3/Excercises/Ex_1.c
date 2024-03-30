// Ex 1 -- overflow initiation.*/

#include <stdio.h>
#include <limits.h> // To print MAX values of apptoriate types (Cases 1,2)
#include <float.h> // To print MAX values of apptoriate types (Cases 1,2)

int main(void){ 
    // Case 1. Signed integer overflow.
    signed int a,b,c;
    printf("Max int size of this relisation is %d.\n", INT_MAX);
    a = 2147483647;
    b = 1;
    c = a + b;
    printf("Overflow: %d\n\n\n", c); // Result is -2147483648

    // Case 2. Unsigned integer overflow.
    unsigned int d,e,f;
    printf("Max unsigned int size of this relisation is %u.\n", UINT_MAX);
    d = 4294967295;
    e = 1;
    f = d + e;
    printf("Overflow: %u\n\n\n", f); // Result is 0

    // Case 3. Float overflow.
    float g,h,k;
    printf("Max float size \
    of this relisation is %f. Bytes at mantisse- %d\n", FLT_MAX, FLT_MANT_DIG);
    g = 1431671455,5;
    h = 1;
    k = g + h;
    printf("Overflow: %f\n\n\n", k); // Result is 






}

// See "Tabble 4.1" at pages 127-128 to refresh <limits.h> syntax