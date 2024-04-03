// sizeof.c -- converts minutes to minutes and seconds.

#include <stdio.h>
#define SEC_PER_MIN 60;

int main(void){
	int sec, min, left;
    printf("Conversion minutes to minutes and seconds!\n");
	printf("Enter quantity of seconds (<=0 for exit):\n");
	scanf("%d", &sec);
    while (sec > 0){
        min = sec / SEC_PER_MIN; // Truncated quantity of minutes
        left = sec % SEC_PER_MIN; // Number of seconds left
	printf("%d seconds - is %d minutes and %d seconds.\n", sec, min, left);
	printf("Enter the next value (<=0 for exit):\n");
	scanf("%d", &sec);
    }
	printf("Done!\n\n\n");	

	return 0;
}

/*  Note 1. In my system this program works correctly 
    when entering numbers consisting of no more than 11 digits. */
/*  Note 2. You can also interrupt the cycle by entering 0 or negative number. */