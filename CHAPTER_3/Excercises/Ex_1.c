// Ex 1 -- overflow initiation.*/

#include <stdio.h>
#include <limits.h> // To print MAX values of apptoriate types (Cases 1,2)
#include <float.h> // To print MAX values of apptoriate types (Case 3)

int main(void){ 
    // Case 1. Signed integer overflow.
    signed int a,b,c;
    printf("Case 1: Max int size of this relisation is %d.\n", INT_MAX);
    a = 2147483647;
    b = 1;
    c = a + b;
    printf("Overflow: %d\n\n\n", c); // Result is -2147483648

    // Case 2. Unsigned integer overflow.
    unsigned int d,e,f;
    printf("Case 2: Max unsigned int size of this relisation is %u.\n", UINT_MAX);
    d = 4294967295;
    e = 1;
    f = d + e;
    printf("Overflow: %u\n\n\n", f); // Result is 0

    // Case 3. Float overflow.
    // Note! Divider "." (not ",") is used.
    float g,h,k;
    printf("Case 3: Max float size of this relisation is %f.\n \
    \rQuantity of bits in mantisse- %d\n", FLT_MAX, FLT_MANT_DIG);
    g = 1431671455.5;
    h = 1.0;
    k = g + h;
    float weg = 1.5;
    printf("Overflow: %f\n\n\n", k); // Result is 1431671424.00000 (why?)
    printf("Correct difference: %.2f\n\n\n", h-weg); // Result is -0.5 (correct)

    // Case 4. Floating point underflow 1
    float l,m;
    printf("Case 4: Max value of positive decimal order\
    of this relisation is %d.\n \
    \rQuantity of bits in mantisse- %d\n", FLT_MAX_10_EXP, FLT_MANT_DIG);
    l = 9E8;
    m = 1E3;
    printf("l = %f, m = %f\n", l, m);
    printf("Overflow: %f\n\n\n", l+m); // Result is 900001024.000000 (why? What about MAX float size?)

    // Case 5. Floating point underflow 2
    // Case 5.1. As a result of multiplication
    float toobig = 3.4E38 * 100.0f;
    printf("Case 5.1.: %e\n\n\n", toobig); // Result: inf   (correct)
    // Case 5.2. As a result of division
    float toosmall = 0.000001 / 2;
    printf("Case 5.2.: %f\n\n\n", toosmall); // Result: 0.000000   (correct)
    printf("Min unsigned float value of this relisation is %f.\n", FLT_MIN);  

    return 0;
}

// See "Tabble 4.1" at pages 127-128 to refresh <limits.h> syntax