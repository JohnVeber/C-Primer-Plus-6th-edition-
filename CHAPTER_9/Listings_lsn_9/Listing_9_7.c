/* factor.c -- uses loops and recursion to calculate factorials. */

#include <stdio.h>

long fact(int n); /* Cycle. */
long rfact(int n); /* Recursion. */

int main(void){
    int num;
    printf("This program calculates factorials.\n");
    printf("Enter values from 0 to 12 (q for exit):\n");
    while(scanf("%d", &num) == 1){
        if(num < 0)
            printf("Negatibe numbers are invalid.\n");
        else if(num > 12)
            printf("Input value shall be lower than 13.\n");
        else{
            printf("Cycle: factorial %d = %ld\n", num, fact(num));
            printf("Recursion: factorial %d = %ld\n", num, rfact(num));
        }
        printf("Enter values from 0 to 12 (q for exit):\n");
    }
    printf("Program finished.\n");
    printf("\n\n\n");
	return 0;
}

long fact(int n){
    long ans;
    for(ans = 1; n > 1; n--)
        ans *= n;
        return ans;
}

long rfact(int n){
    long ans;
    if(n > 0)
        ans = n * rfact(n-1);
    else
        ans = 1;
    return ans;
}
