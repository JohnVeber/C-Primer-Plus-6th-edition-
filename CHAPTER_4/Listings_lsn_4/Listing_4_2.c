// praisel1.c -- using RRAISE for string representation.

#include <stdio.h>
#include <locale.h>
#define PRAISE "You are an outstanding person."

int main(void){
	char name[40];
	printf("What's your name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n\n\n", name, PRAISE);

	return 0;
}

// Problems found: