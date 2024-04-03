// shoes2.c -- calculates foot length for several shoe sizes.

#include <stdio.h>
#define ADJUST 7.31             

int main(void){
	const double SCALE = 0.333;  
	double shoe, foot;
	printf("Size of shoes (man)       foot length.\n");
	shoe = 3.0;
    while (shoe < 18.5){        // Start of "while" cycle
	    foot = SCALE * shoe + ADJUST;
	    printf("%10.1f %20.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }                           // End of cycle block
    printf("If the shoe fits, wear it.\n\n\n");
	return 0;
}
