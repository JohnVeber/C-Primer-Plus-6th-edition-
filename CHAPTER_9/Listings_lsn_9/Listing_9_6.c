/* recur.c -- recursion illustration. */

#include <stdio.h>

void up_and_down(int n){
    printf("Level %d: cell n = %p\n", n, &n);
    if(n < 4)
        up_and_down(n+1);
    printf("LEVEL %d: cell n = %p\n", n, &n);
}               

int main(void){
    up_and_down(1);
    printf("\n\n\n");
	return 0;
}
