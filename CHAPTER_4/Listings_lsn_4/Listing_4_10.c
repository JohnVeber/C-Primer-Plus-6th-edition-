/* stringf.c -- strings formatting */

#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void){
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n\n\n", BLURB);

	return 0;
}
