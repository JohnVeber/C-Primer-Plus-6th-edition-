/* Question_9_b.c -- function which displays a simple menu. */

#include <stdio.h>

int menu(void){
	int option;
	printf("Choose from the following options:\n");
	printf("1) Copy files	2) Move files\n");
	printf("3) Delete files	4) Out of the program\n");
	printf("Enter you choosen option, please:\n");
}

int ch_option(int lower, int upper){
	int option;
	scanf("%u", &option);
	if(option < lower || option > upper){
		printf("Incorrect number of option, repeat please:\n\n\n");
		menu();
	}
	else if( option != 4){
		printf("Choosen option is: %d\n\n\n", option);
		printf("Would you like to choose another option?\n");
		menu();
		return option;
	}
	else{
		printf("Program finished.\n\n\n");
		return option;
	}
	

}

int main(void){
	menu();
	while(ch_option(1,4) != 4){
		ch_option(1,4);
	};
	return 0;
}

/* This program doesn't check a type of input values,
 so entering a character instead of a number will cause the program to behave incorrectly.*/