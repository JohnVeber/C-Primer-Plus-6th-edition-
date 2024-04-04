// swap2.c -- second attempt to create function of values changing.

#include <stdio.h>

void interchange(int u, int v);

int main(void){
	int x = 5, y = 10;

    printf("Initially x = %d and y = %d\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d\n", x, y);

    printf("\n\n\n");
	return 0;
}

void interchange(int u, int v){
    int temp;
    printf("Initially u = %d and v = %d\n", u, v);

    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and v = %d\n", u, v);
}

// Sure these variables haven't swapped in output too.