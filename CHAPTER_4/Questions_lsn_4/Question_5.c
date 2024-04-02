/* Question 5. */

#include <stdio.h>
#define BOOK "War and peace"

int main(void){
	float cost = 12.99;
	float percent= 80.0;

	printf("This copy of the book \"%s\" cost $%.2f.\nThis is %.0f%%  of the cost in a price list.\n\n\n",
		BOOK, cost, percent); 
	
	return 0;
}
