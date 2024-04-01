/* floatcnv.c -- inconsistent floating point conversions */

#include <stdio.h>

int main(void){
	float n1 = 3.0; // floating point type
	double n2 = 3.0; // floating point type
	long n3 = 2000000000; // integer type
	long n4 = 1234567890; // integer type

    // Case 1.
	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4); // floating point type specifiers are used
    // My output is:
    // 3.0e+00  3.0e+00  3.0e+00    0.0e+00
    // Correct  Correct  Incorrect  Incorrect
    // Unpredictable output due to a mismatch between\
     the number of bits that represent n3 and n4 variables on a stack\
     and the number of bits used by printf() function to interpret it.

    // Case 2.
    printf("%ld %ld\n", n3, n4); // Correctly chosen specifiers
    // My output is:
    // 2000000000 1234567890
    // Correct    Correct
    
    // Case 3.
	printf("%ld %ld %ld %ld\n\n\n", n1, n2, n3, n4); // Correctly chosen specifiers for n3 and n4, BUT!
    // My output is:
    // 2000000000 1234567890 2000000000 0
    // Incorrect  Incorrect  Correct    Incorrect
    /* Despite some correctly selected specifiers (n3 and n4), 
    no correct output was obtained, because printf() function
    reads data from a stack continuously and it is enough at least one mismatch
    between numbers of bytes "printed value - specifier" (in this case n1 and n2)
    for all other printed values after them to be interpreted with an errors. */

    //**************************************************************************
    // These additional rows will help you to check your output:
    int size_float = sizeof (float);
    int size_double = sizeof (double);
    int size_long = sizeof (long);
    int size_int = sizeof (int);
    printf("float= %.d bytes, double= %d bytes, long= %d bytes, int= %d dytes\n",
     size_float, size_double, size_long, size_int);    

	return 0;
}
