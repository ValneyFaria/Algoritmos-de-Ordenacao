void Comb_Sort(int vetor[], int TAM) {
	int i, j, gap, swapped = 1;
	int temp;

	gap = TAM;

	while (gap > 1 || swapped == 1) {
		gap = gap * 10 / 13;
		if (gap == 9 || gap == 10) gap = 11;
		if (gap < 1) gap = 1;
		swapped = 0;
		for (i = 0, j = gap; j < TAM; i++, j++) {
			if (vetor[i] > vetor[j]) {
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
				swapped = 1;
			}
		}
	}
}