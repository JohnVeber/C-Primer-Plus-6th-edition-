#include <stdio.h>
#define TWO 2

int main (void)
{
    int toes, toes_2, toes_sqrd;
    toes=10;
    toes_2=toes*TWO; //  Calculate a doubled value of "toes" variable
    toes_sqrd=toes*toes; //  Calculate a squared value of "toes" variable
    printf("Это переменная toes: %d,\nЭто ее удвоенное значение: %d,\nА это ее квадрат: %d.", toes, toes_2, toes_sqrd);
    return 0;
}
