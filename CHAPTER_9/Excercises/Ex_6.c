// Ex_6.c -- sorting three variable values in the calling function.

#include <stdio.h>

void foo(double *first, double *second, double *third);

int main(void){
	double x = 3, y = 30, z = -126.0;

    printf("Initially x = %f, y = %f and z = %f\n", x, y, z);
    foo(&x, &y, &z);
    printf("Now x = %f, y = %f and z = %f\n", x, y, z);
    printf("\n\n\n");
	return 0;
}

void foo(double *first, double *second, double *third){
    double temp;
    if(*first < *second && *second < *third)
        return;
    else if (*first < *second && *second > *third)
        if(*first > *third){
            temp = *first;
            *first = *third;
            *third = *second;
            *second = temp;
        }
        else {
            temp = *second;
            *second = *third;
            *third = temp;
        }
    else if(*first > *second && *second < *third){
        
        if(*first > *third){
            temp = *first;
            *first = *second;
            *second = *third;
            *third = temp;
        }
        else if(*first < *third){
            temp = *second;
            *second = *first;
            *first = temp;
        }
        else
        return;
    }
    else if(*first > *second && *second > *third){
        temp = *first;
        *first = *third;
        *third = temp;
    }

}

// Bug 1.
// If there is more than one of equial variable values, this function does not work correctly.