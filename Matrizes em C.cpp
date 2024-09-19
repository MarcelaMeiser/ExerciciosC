#include <stdio.h>

int main()
{
	int L, C, i, j;
	
	printf("Quantas linhas vai ter a matriz? ");
	scanf("%d", &L);
	
	printf("Quantas colunas vai ter a matriz? ");
	scanf("%d", &C);
	
	int mat[M][N];
	
	for (i = 0; i < L; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("Elemento [%d,%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\nMATRIZ DIGITADA:\n");
	
	for (i = 0; i < L; i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
