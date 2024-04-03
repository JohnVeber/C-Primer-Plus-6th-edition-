/* Ex.6 -- aligned output & strlen() usage */

#include <stdio.h>

int main(void){
	char name[40];
	char surname[40];
	int lettersn, letterss;

	printf("Please enter your first and last name.\n"); 
	scanf("%s%s", &name, &surname);
	
	lettersn = strlen(name);
	letterss = strlen(surname);

	printf("%s %s\n", name,surname); 
	printf("%*d %*d\n", lettersn, lettersn, letterss, letterss); 

	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n\n\n", lettersn, lettersn, letterss, letterss); 

	return 0;
}
