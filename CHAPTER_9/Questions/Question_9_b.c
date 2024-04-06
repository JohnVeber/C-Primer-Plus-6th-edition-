// Question_9_b.c -- Trying to interract with the menu

#include <stdio.h>

int menu(void);

int main(void){
	int upper = 5;
	int lower = 0;
	int choosen_option;

	choosen_option = menu();

	while(choosen_option !=4){
		if(choosen_option >= upper || choosen_option <= lower){
			printf("LET'S TRY AGAIN I SAID!!!\n");
			choosen_option = menu();
		}
		else {
			printf("Choosen option is: %d\n\n\n", choosen_option);
			printf("Would you like to choose another option?\n");
			choosen_option = menu();
		}
	}
	
	printf("Program finished.\n\n\n");
	return 0;
}

int menu(void){
	int option;
	printf("Choose from the following options:\n");
	printf("1) Copy files	2) Move files\n");
	printf("3) Delete files	4) Out of the program\n");
	printf("Enter you choosen option, please:\n");
	if (scanf("%d", &option) == 1)
		return option;
	else
		return 4;
}

// Note 1.
// Works incorrect. Tried to use %f inside menu()- Useless