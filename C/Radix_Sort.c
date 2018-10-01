#include <stdlib.h>

void Radix_Sort(int vetor[], int TAM) {
    int i;
    int *b;
    int maior = vetor[0];
    int exp = 1;

    b = (int *)calloc(TAM, sizeof(int));

    for (i = 0; i < TAM; i++) {
        if (vetor[i] > maior)
    	    maior = vetor[i];
    }
 
    while (maior/exp > 0) {
        int bucket[10] = { 0 };
    	for (i = 0; i < TAM; i++)
    	    bucket[(vetor[i] / exp) % 10]++; 
    	for (i = 1; i < 10; i++)
    	    bucket[i] += bucket[i - 1];
    	for (i = TAM - 1; i >= 0; i--)
    	    b[--bucket[(vetor[i] / exp) % 10]] = vetor[i];
    	for (i = 0; i < TAM; i++)
    	    vetor[i] = b[i];
    	exp *= 10;
    }

    free(b);
}