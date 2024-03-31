/* praise2.c -- difference between sizeof and strlen() */
/* If your compiler does not recognize the %zd specifier, try using %u or %lu. */

#include <stdio.h>
#include <string.h> /* Contains the prototype of strlenf() */
#include <locale.h>
#define PRAISE "You are an outstanding person."

int main(void){
	char name[40];
	printf("What's you name? ");
	#pragma warning (suppress:4996)
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name consists of %zd characters and takes up %zd memory cells.\n",
		strlen(name), sizeof name);
	printf("The praise phrase contains %zd characters",
		strlen(PRAISE));
	printf(" and takes up %zd memory cells.\n\n\n", sizeof PRAISE);
		
	return 0;
}
