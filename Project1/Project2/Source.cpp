#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;

	printf("Digite o ano em que nasceu: ");
	scanf_s("%d",&number);

	printf("\nVoce tem %d anos\n\n",2016-number);


	system("pause");
	return 0;
}