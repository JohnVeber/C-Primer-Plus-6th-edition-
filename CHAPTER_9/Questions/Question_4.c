// Question_4.c -- simple sum func.

#include <stdio.h>

int sum(int a, int b);

int main(void){
	int first, second, result;
	printf("Enter a pair of integer values, please:\n");
	scanf("%u %u", &first, &second);
	
	result = sum(first,second);
	printf("The summ of them is: %d\n\n\n", result);

	return 0;
}

int sum(int a, int b){
	int c; // Use to save summ
	c = a + b;
	return c;
}
