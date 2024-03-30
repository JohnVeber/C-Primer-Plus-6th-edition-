// Ex 2 -- print a symbol baced on their ASCII code input.*/
#include <stdio.h>

int main (void){
    int asciicode;
    printf("Enter any ASCII code please:");
    scanf("%u", &asciicode);
    char ch = asciicode;
    printf("\nThe symbol of %d in ASCII encoding is %c.\n\n\n", asciicode, ch);
    return 0;
}

// Problems found:
// 1. There is no input check and any protection from incorrect input.