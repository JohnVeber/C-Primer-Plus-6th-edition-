/* 4.17 skip2.c -- skiptwo.c -- skips the first two numbers entered in the input stream */

#include <stdio.h>

int main(void){
	int n;
	printf("Enter tree digital numbers: \n");
	scanf("%*d %*d %d", &n);
	printf("The las digital number was %d\n\n\n", n);

	return 0;
}
