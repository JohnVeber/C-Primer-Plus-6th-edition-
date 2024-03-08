/*print2.c -- дополнительные свойства функции printf() */
#include <stdio.h>
//#include <locale.h>
int main(void)
{
	//setlocale(LC_ALL, "russian");
	unsigned int un = 3000000000; /* система с 32-битным типом int */
	short end = 200;              /* b 16-битным типом short */
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u, но не %d\n", un, un); //%d - спецификатор для decimal (а он со знаком)
	printf("end = %hd, и %d\n", end, end); //стандарт обеспечивает совместимость и происходит расширение до типа int
	printf("big = %ld, но не %hd\n", big, big); // спецификатор %h заставляет просматривать только последние 16 бит, а там 1 (в двоичном виде)
	printf("verybig = %lld, но не %ld\n", verybig, verybig); //аналогичное 3й строке (вывод только последних 32 битов)

	return 0;
}
// компилируется как в листинге!