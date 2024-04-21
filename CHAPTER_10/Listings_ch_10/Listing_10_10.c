// sum_arr1.c -- sum of array elements.

#include <stdio.h>
#define SIZE 10

int sum(int ar[], int n);

int main(void){
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20}; 
    long answer;

    answer = sum(marbles, SIZE);
    printf ("Total sum of 'marbles' array is %ld.\n", answer); 
    printf ("Total memory amount allocated for 'marbles' array \
storage is %zd.\n", sizeof marbles); 

    printf ("\n\n"); 
    return 0;
}

int sum(int ar[], int n){
    int i;
    int total = 0;
    for(i = 0; i < n; i++)
        total += ar[i];
    printf ("ar size is %zd bytes.\n", sizeof ar); 

    return total;
}

// ar size is 8 bytes only because ar isn't an array, but
// just pointer for the first element of the marbles array !