#include <stdio.h>
#include <stdlib.h>

void Counting_Sort(int vetor[], int TAM) {
	int i, j, z, min, max;

	max = vetor[0];
	min = vetor[0];

	for (i = 0; i < TAM; ++i) { // Encontra o maior e o menor do vetor
		if (vetor[i] > max) {
			max = vetor[i];
			continue;			
		}
		if (vetor[i] < min) min = vetor[i];
	}

	int range = max - min + 1;
	int *count = (int *) malloc(range * sizeof(*vetor));

	for(i = 0; i < range; i++) count[i] = 0;
	for(i = 0; i < TAM; i++) count[ vetor[i] - min ]++;

	for(i = min, z = 0; i <= max; i++) {
		for(j = 0; j < count[i - min]; j++) {
			vetor[z++] = i;
		}
	} 

	free(count);
}