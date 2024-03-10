#include <stdio.h>
#include <locale.h>
int main (void)
{
    setlocale(LC_ALL, ".UTF8"); // ранее тут было LC_ALL, "rusian"
    printf("Evgeny Veber\n");
    printf("Евгений\nВебер\n");
    printf("Евгений Вебер\n");
    return 0;
}
