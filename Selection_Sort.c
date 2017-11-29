void Selection_Sort (int vetor[], int TAM) {
	int i, j, min, aux;

	for (i = 0; i < (TAM - 1); i++) {
		min = i;
		for (j = (i + 1); j < TAM; j++) {
			if (vetor[j] < vetor[min])
				min = j;
		}
		if (vetor[i] != vetor[min]) {
			aux = vetor[i];
			vetor[i] = vetor[min];
			vetor[min] = aux;
		}
	}
}
