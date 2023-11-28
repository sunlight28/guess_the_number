#include <stdio.h>
#include <time.h>
#include <locale.h>

int main(void)
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int number;
	int guess;
	int tries = 0;
	number = rand() % 100;
	do 
	{
		printf("Кол-во попыток > %d\n", tries);
		printf("Введите число > ");
		scanf_s("%d", &guess);
		if (number > guess)
			printf("\nЗагаданное число больше.\n");
		if (number < guess)
			printf("\nЗагаданное число меньше.\n");
		tries++;
	} while (guess != number);
	printf("\nКРАСАВАААААААААА");
	return 0;
}