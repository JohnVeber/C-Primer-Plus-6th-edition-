/* width.c -- output fields of different widths */

#include <stdio.h>
#define PAGES 909

int main(void){
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);
	printf("*%-10d*\n\n\n", PAGES);

	return 0;
}
