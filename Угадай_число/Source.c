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
		printf("���-�� ������� > %d\n", tries);
		printf("������� ����� > ");
		scanf_s("%d", &guess);
		if (number > guess)
			printf("\n���������� ����� ������.\n");
		if (number < guess)
			printf("\n���������� ����� ������.\n");
		tries++;
	} while (guess != number);
	printf("\n����������������");
	return 0;
}