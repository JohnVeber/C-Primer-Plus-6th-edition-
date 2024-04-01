/* praise2.c -- difference between sizeof and strlen() */
/* If your compiler does not recognize the %zd specifier, try using %u or %lu. */

#include <stdio.h>
#include <string.h> /* Contains the prototype of strlenf() */
#define PRAISE "You are an outstanding person."

int main(void){
	char name[40];
	printf("What's you name? ");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name consists of %zd characters and takes up %zd memory cells.\n",
		strlen(name), sizeof name);
	printf("The praise phrase contains %zd characters",
		strlen(PRAISE));
	printf(" and takes up %zd memory cells.\n\n\n", sizeof PRAISE);
		
	return 0;
}

// Note 1.
// C99 and C11 standards assumes %zd specificator usage for "sizeof" operation type and
// type of strlen() returned value type. Mentioned at the table 4.4 on page 133.

// Note 2.
// Remember the next feature: sizeof(double)	but    sizeof name
// 2nd example doesn't require brackets.
// Nevertheless, this form is allowed: sizeof(6.28)

// Note 3.
// The sizeof operation returns the scecified type size or size of input value
// C standard allow use only integer unside value for these purposes
// It mean you can use %u, %lu and %llu (depends on situation)
// To inncrease portability it's better to use size_t from stddef.h (includes from stdio.h)
// Cpecificator %z in this case will be used in printf() function to get returned value 
// The ptrdiff_t type and %t specificator for them used in case of work with pointers consequently.
// Details you can find at page 154.