// Question_6.c -- function which affects (change) external parameters
// This version shall work correctly

#include <stdio.h>

int alter(int *x, int *y);

int main(void){
	int first, second;
	printf("Enter a pair of integer values, please:\n");
	scanf("%u %u", &first, &second);
	
	printf("Variables before function are:\
	 x = %d, y = %d\n\n\n", first, second);

	alter(&first, &second);

	printf("Variables after function are:\
	 x = %d, y = %d\n\n\n", first, second);

	return 0;
}

int alter(int *x, int *y){ // x and y are pointers and *x *y have int type.
	int summ = *x + *y;
	int diff = *x - *y;

	*x = summ; 
	*y = diff; 
	return 0;
}

// ? We shall get to function not pointers, but variables...
// Can the task be considered completed ?