// Question 9 -- escape sequences usage.*/

#include <stdio.h>
int main(void){
    char ch;
    // Case 1. Escape sequence (character) used to set variable value 
    ch = '\r';
    printf("_____\nTest string 1");
    printf("%c", ch); //carriage return delete the firts test string when activate
    printf("Test string 2\n_____");

    // Case 2. Decimal used to set variable value 
    ch = 13;
    printf("_____\nTest string 1");
    printf("%c", ch); //carriage return delete the firts test string when activate
    printf("Test string 2\n_____\n");

    // Case 3. Octal character constant used to set variable value 
    ch = '\015';
    printf("_____\nTest string 1");
    printf("%c", ch); //carriage return delete the firts test string when activate
    printf("Test string 2\n_____\n");

    // Case 4. Hexadecimal character constant used to set variable value 
    ch = '\xd';
    printf("_____\nTest string 1");
    printf("%c", ch); //carriage return delete the firts test string when activate
    printf("Test string 2\n_____\n");

    return 0;
}

// Details can be found at pages 94-97 of the book.