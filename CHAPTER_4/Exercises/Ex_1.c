/* Ex.1 -- name and surname output*/

#include <stdio.h>

int main(void){
	char x[40];
	char y[40];
	
	printf("Enter your name and surname please.\n");
	scanf("%s %s", &x, &y); 
	printf("%s, %s\n\n\n", y, x );

	return 0;
}
