void Heap_Sort(int vetor[], int TAM) {
	int i = TAM / 2, pai, filho, t;
	while(true) {
		if (i > 0) {
			i--;
			t = vetor[i];
		} else {
			TAM--;
			if (TAM == 0) return;
			t = vetor[TAM];
			vetor[TAM] = vetor[0];
		}
		pai = i;
		filho = i * 2 + 1;
		while (filho < TAM) {
			if ((filho + 1 < TAM)  &&  (vetor[filho + 1] > vetor[filho]))
				filho++;
			if (vetor[filho] > t) {
				vetor[pai] = vetor[filho];
				pai = filho;
				filho = pai * 2 + 1;
			} else {
				break;
			}
		}
		vetor[pai] = t;
	}
}