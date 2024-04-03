/* Ex.4 -- simple usage of scanf() */

#include <stdio.h>
int main(void){
	char name[40];
	float cm;
	float m;

	printf("Please enter your height in centimeters and your name.\n");
	scanf("%f%s",&cm, &name); 
	m = cm / 100;
	printf("%s your height is %.2f meters.\n", name, m);
	
	
	return 0;
}

// Note 1.
// Santimeters and meters are used instead of inches and feet.