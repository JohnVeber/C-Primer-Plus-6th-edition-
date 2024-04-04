// loccheck.c -- checking to find out where variables are stored.

#include <stdio.h>

void mikado(int);               //function declaration
int main(void){
	int pooh = 2, bah = 5;      // local variablere for main
    printf("Inside main() pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("Inside main() bah = %d and &bah = %p\n", bah, &bah);

    mikado(pooh);
    printf("\n\n\n");
	return 0;
}

void mikado(int bah){           //function definition
    int pooh = 10;              //local variable for mikado function
    printf("Inside mikado() pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("Inside mikado() bah = %d and &bah = %p\n", bah, &bah);
}

// Question 1. 
// My output (pointers length) consists of 12 signs after 0x hexaoctal prefix
// As the author says, each of them corresponds to four bits.
// It means these 12-signs adreses have 40 (typo in book?) bits size 