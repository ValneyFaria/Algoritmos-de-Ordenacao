void Insertion_Sort(int vetor[], int TAM) {
	for(size_t i = 1; i < TAM; ++i) {
		int tmp = vetor[i];
		size_t j = i;
		
		while(j > 0 && tmp < vetor[j - 1]) {
			vetor[j] = vetor[j - 1];
			--j;
		}
		vetor[j] = tmp;
	}
}