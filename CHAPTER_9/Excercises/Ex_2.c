/* Ex_2.c -- Devise a function chline(ch,i,j) that prints the requested character in columns i
 through j.*/

#include <stdio.h>

void chline(char ch, int i, int j);

int main(void){
    int a, b;
    a = 5;
    b = 9;
    chline('#', a, b);
    return 0;
}

void chline(char ch, int i, int j){
    int col = 0;
    while (col < i){
        putchar(' ');
        col++;
    }
    while (col <= j){
        putchar(ch);
        col++;
    }
    putchar('\n');
}
