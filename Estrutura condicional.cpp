#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int hora;
	
	printf("Que horas são?");
	scanf("%d", &hora);
	
	if (hora < 12)
	{
		printf("Bom dia!");
	}
	else if (hora >= 12 && hora < 18)
	{
		printf("Boa tarde!");
	}
	else
	{
		printf("Boa noite!");
	}
}
