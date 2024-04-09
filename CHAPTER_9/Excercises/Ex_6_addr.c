// Ex_6.c -- sorting three variable values in the calling function.

#include <stdio.h>

void foo(double *first, double *second, double *third);

int main(void){
	double x = -90.0, y = 0.0, z = -70.0;

    printf("Initially x = %p, y = %p and z = %p\n", &x, &y, &z);
    foo(&x, &y, &z);
    printf("Now x = %p, y = %p and z = %p\n", &x, &y, &z);
    printf("\n\n\n");
	return 0;
}

void foo(double *first, double *second, double *third){
    double temp;
    if(&first < &second && &second < &third)
        return;
    else if (&first < &second && &second > &third)
        if(&first > &third){
            double *temp;
            temp = &first;
            first = &third;
            third = &second;
            second = &temp;
        }
        else {
            double *temp;
            temp = &second;
            second = &third;
            third = &temp;
        }
    else if(&first > &second && &second < &third){
        
        if(&first > &third){
            double *temp;
            temp = &first;
            first = &second;
            second = &third;
            third = &temp;
        }
        else if(&first < &third){
            double *temp;
            temp = &second;
            second = &first;
            first = &temp;
        }
        else
        return;
    }
    else if(&first > &second && &second > &third){
        double *temp;
        temp = &first;
        first = &third;
        third = &temp;
    }

}

// Note 1.
// The program need to be tested.