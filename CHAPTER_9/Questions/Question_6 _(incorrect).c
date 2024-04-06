// Question_6.c -- function which affects (change) external parameters
// This  version INCORRECT!
// The program saved just to learn mistakes made.

#include <stdio.h>

int alter(int x, int y);

int main(void){
	int first, second;
	printf("Enter a pair of integer values, please:\n");
	scanf("%u %u", &first, &second);
	
	printf("Variables before function are:\
	 x = %d, y = %d\n\n\n", first, second);

	alter(first,second);

	printf("Variables after function are:\
	 x = %d, y = %d\n\n\n", first, second);

	return 0;
}

int alter(int x, int y){
	int *px = &x; // Pointer px points to variable x
	int *py = &y; // Pointer py points to variable y

	int summ = (x + y); 
	int diff = (x - y);

	//*px = 200;
	//*py = 300;

	*px = summ; //doesn't work
	*py = diff; //doesn't work
	return 0;
}
