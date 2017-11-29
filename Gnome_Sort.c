void Gnome_Sort(int vetor[], int TAM) {
	int i = 1, j = 2, t;

#	define swap(i, j) { t = vetor[i]; vetor[i] = vetor[j]; vetor[j] = t; } 
	
	while(i < TAM) {
		if (vetor[i - 1] > vetor[i]) {
			swap(i - 1, i);
			if (--i) continue;
		}
		i = j++;
	}
#	undef swap
}