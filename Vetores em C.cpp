#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	
	printf("Digite a quantidade de n�meros:");
	scanf("%d", &n);
	
	int vet[n];
	
	for (i=0; i<n; i++)
	{
		printf("Digite um n�mero:");
		scanf("%d", &vet[i]);
	}
	
	printf("\nN�MEROS DIGITADOS:\n");
	
	for (i=0; i<n; i++)
	{
		printf("\nN�mero: %d\n", vet[i]);
	}
}
