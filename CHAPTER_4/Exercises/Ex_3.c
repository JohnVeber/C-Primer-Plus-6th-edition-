/* Ex.3 -- diffeerent ways of a float output. */

#include <stdio.h>

int main(void){
	float a;
    //Case a
	scanf("%e", &a); 
	printf("a1 %.1f\n", a);
	printf("a2 %.1e\n", a);     // My input is: 21.3   -->  Output: 2.1e+01 (not +001)

    //Case b
    scanf("%e", &a);	
	printf("b1 %+.3f\n", a);
	printf("b2 %.3E\n\n\n", a); // My input is: 21.290   -->  Output: 2.219E+01 (not +001)

	return 0;
}
