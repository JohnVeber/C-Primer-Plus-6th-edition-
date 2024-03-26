#include <stdio.h>
//#include <locale.h>
int main(void)
{
	//setlocale(LC_ALL, "russian");
	float toobig = 3.4E38*100.0f;
	printf("%e\n", toobig);
	
	return 0;
}