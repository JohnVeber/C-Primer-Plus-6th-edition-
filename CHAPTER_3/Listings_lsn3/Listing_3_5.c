/* charcode.c -- displays the code value of any character */

#include <stdio.h>

int main(void){
	char ch; 
	printf("Please enter any character and press 'Enter'. \n");
    scanf("%c", &ch);     /* User enter any character */
	printf("The code of character %c is %d.\n", ch, ch);
	printf("\n\n"); //Just to separate output
	return 0;
}

// Bugs reported: incorrect handling of russian characters
