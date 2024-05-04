// Ex_7.c -- reading characters till EOF.

#include <stdio.h>

int char_number(char);

int main(void){
	char x;
    printf("Enter any symbol:\n");

    while ((x = getchar()) != EOF){
        if(char_number(x) != -1){
            printf("Enter the next one:\n");
            continue;
        }
        else 
        break;
    }
    printf("This isn't charachter.");
    return 0;
}

int char_number(char character){
    if(((character > 64) & (character < 91)) || ((character > 96) & (character < 123))){
        int ret = (int)character;
        printf("You entered ");
        putchar(character);
        printf(". This is characters with ASCII code %d\n", ret);
        
        return ret;
    }
    else
        //printf("This isn't charachter.");
	    return -1;
}

// (((character <= 64) || (character >= 91)) & ((character <= 96) || (character >= 123)))

// IN PROGRESS