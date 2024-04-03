// squares.c -- generates a table of squares of 20 values.

#include <stdio.h>

int main(void){
	int num = 1;
    while (num < 21){
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }
    printf("\n\n\n");
	return 0;
}
