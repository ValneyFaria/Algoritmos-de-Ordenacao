void Quick_Sort(int vetor[], int TAM) {
	if (TAM < 2)
		return;

	int i, j;
	int pivot = vetor[TAM / 2];

	for (i = 0, j = TAM - 1;; i++, j--) {
		while (vetor[i] < pivot)
			i++;
		while (vetor[j] > pivot)
			j--;

		if (i >= j)
			break;

		int temp = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = temp;
	}

	Quick_Sort(vetor, i);
	Quick_Sort(vetor + i, TAM - i);
}