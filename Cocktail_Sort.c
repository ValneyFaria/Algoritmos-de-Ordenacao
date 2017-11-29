// can be any swap function. This swap is optimized for numbers.
void swap(int *x, int *y) {
	if(x == y)
		return;
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}

void Cocktail_Sort(int vetor[], size_t TAM) {
	while(1) {
		// packing two similar loops into one
		char flag;
		size_t start[2] = {1, TAM - 1},
			   end[2] = {TAM, 0},
			   inc[2] = {1, -1};

		for(int it = 0; it < 2; ++it) {
			flag = 1;
			for(int i = start[it]; i != end[it]; i += inc[it])
				if(vetor[i - 1] > vetor[i]) {
					swap(vetor + i - 1, vetor + i);
					flag = 0;
				}
			if(flag)
				return;
		}
	}
}