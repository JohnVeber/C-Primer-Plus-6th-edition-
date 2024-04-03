// wheat.c -- exponential growth.

#include <stdio.h>
#define SQUARES 64    // Number of squares on a chessboard

int main(void){
    const double CROP = 2E16;
    double current, total;
	int count = 1;
    printf("Square     added        total       ");
    printf("precent of  \n");
    printf("           grains       grains     ");
    printf("world harvest\n\n");
        total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    
    while (count < SQUARES){
        count = count + 1;
        current = 2.0 * current;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    }
    printf("Thas't it.\n\n\n");
	return 0;
}
