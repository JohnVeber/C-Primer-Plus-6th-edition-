// talkback.c -- an example of simple interactive program.

#include <stdio.h>
#include <string.h>
#define DENCITY 62.4

int main(void){
    float weight, volume;
    int size, letters;
    char name[40];
    printf("Hello, what's your name?\n");
    scanf("%s", name);
    printf("%s, what's your weidht in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENCITY;
    printf("Ok, %s, your volume is %2.2f cubic foot.\n", name, volume);
    printf("In addition your name contain %d letters,\n",letters);
    printf("And we have %d bytes to store them,\n\n\n", size);
    
    return 0;
}

// Problems found:
 