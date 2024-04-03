// divide.c -- division as we know it.

#include <stdio.h>

int main(void){
    printf("Integer division: 5/4 is %d\n", 5/4); // Truncation
    printf("Integer division: 6/3 is %d\n", 6/3);
    printf("Integer division: 7/4 is %d\n", 7/4); // Truncation
    printf("Floating point division: 7./4. is %1.2f\n", 7./4.);
    printf("Combined division: 7./4 is %1.2f\n\n\n", 7./4); // compiler converts both operands\
     to the same type
	return 0;
}

// C99 standard defines "truncation in zero direction".