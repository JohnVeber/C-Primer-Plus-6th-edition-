// Ex_3.c -- a function with simple output : lines of charachters


#include <stdio.h>
void lines(char ch, int n_of_ch, int n_of_lines);

int main(void){
    lines('$', 20, 4);
    printf("\n\n\n");
    return 0;
}

void lines(char ch, int n_of_ch, int n_of_lines){
    int count_ch = 0;
    int count_r = 0;
    while(count_r++ < n_of_lines){
        while(count_ch++ < n_of_ch){
            printf("%c", ch);
        }
        printf("\n");
    }
}

// The function works incorrectly