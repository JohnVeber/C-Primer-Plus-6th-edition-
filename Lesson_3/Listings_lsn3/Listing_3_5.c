/* charcode.c -- отображает кодовое значение символа  */

#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "russian");
	char ch; 
	printf("Введите какой-нибудь символ. \n");
    //#pragma warning (suppress:4996)
	scanf("%c", &ch);     /*пользователь вводит символ*/
	printf("Код символа %c равен %d.\n", ch, ch);

	return 0;
}