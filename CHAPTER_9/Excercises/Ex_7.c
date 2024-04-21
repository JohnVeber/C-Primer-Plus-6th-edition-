// Ex_7.c -- reading characters till EOF.

#include <stdio.h>

void char_number(int);

int main(void){
	char x;
    while ((x = getchar()) != EOF)
        putchar(x);
    printf("\n\n\n");
	return 0;
}

void char_number(int){

}
