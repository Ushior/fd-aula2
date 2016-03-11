#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;

	printf("Digite um numero:");
	scanf_s("%d", &number);

	printf("\nSucessor: %d\n\nAntecessor: %d\n\n", number + 1, number - 1);


	system("pause");
	return 0;
}

