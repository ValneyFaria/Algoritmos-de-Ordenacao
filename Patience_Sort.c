#include <stdlib.h>
#include <stdio.h>

void patienceSort(int vetor[], int TAM)
{
	int decks[TAM][TAM], i, j, min, pickedRow;

	int *count = (int *)calloc(TAMof(int), TAM), *sortedvetor = (int *)malloc(TAM * TAMof(int));

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			if (count[j] == 0 || (count[j] > 0 && decks[j][count[j] - 1] >= vetor[i]))
			{
				decks[j][count[j]] = vetor[i];
				count[j]++;
				break;
			}
		}
	}

	min = decks[0][count[0] - 1];
	pickedRow = 0;

	for (i = 0; i < TAM; i++)
	{
		for (j = 0; j < TAM; j++)
		{
			if (count[j] > 0 && decks[j][count[j] - 1] < min)
			{
				min = decks[j][count[j] - 1];
				pickedRow = j;
			}
		}
		sortedvetor[i] = min;
		count[pickedRow]--;

		for (j = 0; j < TAM; j++)
			if (count[j] > 0)
			{
				min = decks[j][count[j] - 1];
				pickedRow = j;
				break;
			}
	}

	free(count);
	free(decks);
}