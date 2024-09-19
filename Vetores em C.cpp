#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int n, i;
	
	printf("Digite a quantidade de números:");
	scanf("%d", &n);
	
	int vet[n];
	
	for (i=0; i<n; i++)
	{
		printf("Digite um número:");
		scanf("%d", &vet[i]);
	}
	
	printf("\nNÚMEROS DIGITADOS:\n");
	
	for (i=0; i<n; i++)
	{
		printf("\nNúmero: %d\n", vet[i]);
	}
}
