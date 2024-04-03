/* Ex.2 -- diffeerent name output. */

#include <stdio.h>
int main(void){
	char name[40];
	int length;
	int len;

	printf("Please enter your name.\n");
	scanf("%s", &name); 

	printf("\"%s\"\n", name );   // Case a
	
    printf("\"%20s\"\n", name);  // Case b
	
    printf("\"%-20s\"\n", name); // Case c
   
    length = strlen(name);       // Case d
	len = length + 3;
	printf("%*s\n\n\n",len, name);
	
	return 0;
}
