// sizeof.c -- "sizeof" operation usage.

#include <stdio.h>

int main(void){
	int n = 0;
    size_t intsize;
    intsize = sizeof (int);
    printf("n= %d, n consists of %zd bytes; \
all of int values have %zd bytes.\n\n\n", n, sizeof n, intsize);

	return 0;
}
