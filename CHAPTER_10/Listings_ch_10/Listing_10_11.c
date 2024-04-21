// sum_arr2.c -- also sum of array elements.

#include <stdio.h>
#define SIZE 10

int sump(int *start, int *end);

int main(void){
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20}; 
    long answer;
    answer = sump(marbles, marbles + SIZE);
    printf ("Total sum of 'marbles' array is %ld.\n", answer);
    printf ("\n\n"); 
    return 0;
}
// using pointer arithmetic:
int sump(int *start, int *end){
    int total = 0;
    while(start < end){
        total += *start;
        start++;        
    }
    return total;
}
