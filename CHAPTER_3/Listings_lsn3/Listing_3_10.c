// escape.c -- escape sequences usage.*/

#include <stdio.h>
int main(void){
	float salary;
	printf("\aEnter the desire summ off monthly income:");
	printf(" $_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f per month is $%.2f per year.",salary, salary*12.0);
	printf("\rWow!\n");
    return 0;
}
