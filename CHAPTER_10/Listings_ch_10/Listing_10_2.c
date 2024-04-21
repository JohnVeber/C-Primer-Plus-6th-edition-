// no_data.c -- uninitialized array (test).

#include <stdio.h>
#define SIZE 4

int main(void){
    int no_data[SIZE]; // No array iniitialization
    int i;
    printf ("%2s%14s\n", "i", "no_data[i]");
    for(i = 0; i < SIZE; i++)
        printf ("%2d%14d\n", i, no_data[i]);

    return 0;
}
// There are trash in right column (in my case all of values are 0)