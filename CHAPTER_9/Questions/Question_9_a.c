// Question_9_a.c -- function which displays a simple menu

#include <stdio.h>

int menu(void);

int main(void){

	menu();
	return 0;
}

int menu(void){
	int option;
	printf("Choose from the following options:\n");
	printf("1) Copy files	2) Move files\n");
	printf("3) Delete files	4) Out of the program\n");
	printf("Enter you choosen option, please:\n");
	scanf("%u", &option);

	return option;
}

// Note 1.
// This function does not check input values yet.