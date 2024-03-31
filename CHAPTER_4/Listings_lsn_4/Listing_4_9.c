/* flags.c -- illustrates a usage of some formatting flags. */

#include <stdio.h>

int main(void){
	printf("%x %X %#x\n",31,31,31);
	printf("**%d**% d**% d**\n", 42,42,-42);
	printf("**%5d**%5.3d**%05d**%05.3d**\n\n\n", 6,6,6,6);

	return 0;
}

/* Unfortunately can't explain is any difference 
between  %x (outputs 1f in a first row)
and %X (outputs 1F in a first row consequently) options of writing. */