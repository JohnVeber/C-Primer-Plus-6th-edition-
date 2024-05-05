/* binary.c -- outputs integers in binary notation. */

#include <stdio.h>

void to_binary(unsigned long n){ /* Recursive function. */
    int r;
    r = n % 2;
    if(n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1'); /* ternary operation */
}               

int main(void){
    unsigned long number;
    printf("Enter integer number (q for exit):\n");
    while(scanf("%lu", &number) == 1){
        printf("Decimal equivalent:\n");
        to_binary(number);
        putchar('\n');
        printf("Enter integer number (q for exit):\n");
    }
    printf("Program finished.\n");
    printf("\n\n\n");
	return 0;
}
