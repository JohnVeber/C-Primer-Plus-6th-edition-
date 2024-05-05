/* Ex_7.c -- reading characters till EOF. Task have been changedf a bit:
an ASCII code of input charachters outputs instead of alphabet number. */

#include <stdio.h>

int char_number(char);

int main(void){
	char x;
    printf("Enter any symbol:\n");
    int ret_val = 0;
    while ((x = getchar()) != EOF){
        ret_val = char_number(x);
        if(ret_val == -1){
            continue;
        }
        if(ret_val == -2){
            printf("This isn't charachter.");
            break;
        }
        printf("Enter the next one:\n");
    }
    //printf("x = %d.", x);
    return 0;
}

int char_number(char character){
    int ret = (int)character;
    if(((ret > 64) && (ret < 91)) || ((ret > 96) && (ret < 123))){
        printf("You entered ");
        putchar(character);
        printf(". This is characters with ASCII code %d\n", ret);
        
        return ret;
    }
    else if(ret == '\n'){
        return -1;
    }
    return -2;
}
