// Ex 3 -- sound signal output.*/
#include <stdio.h>

int main (void){
    char beep;
    // 1 st way
    beep = 7;
    printf("%c", beep);

    // 2 nd way
    beep = '\a';
    printf("%c", beep);

    // 3 rd way
    beep = '\07';
    printf("%c", beep);
    
    // 4 th way
    beep = '\0x7';
    printf("%c", beep);
    
    
    // printf("Enter any ASCII code please:");
    // scanf("%u", &asciicode);
    // char ch = asciicode;
    // printf("\nThe symbol of %d in ASCII encoding is %c.\n\n\n", asciicode, ch);
    return 0;
}

// Problems found:
// 1. There is no sound during output.