#include <stdio.h>

void Bubble_Sort(int vetor[], int TAM) {
	int k, j, aux;

	for (k = TAM - 1; k > 0; k--) { 		// PERCORRE O VETOR DO FINAL PARA O INICIO
		for (j = 0; j < k; j++) { 				// J SAI DA POSIÇÃO 0 E PERCORRE ATÉ O I
			if (vetor[j] > vetor[j + 1]) { 		// SE A POSIÇÃO EM QUE J ESTÁ CONTIVER UM VALOR MENOR
				aux          = vetor[j];		// QUE A PROXIMA POSIÇÃO
				vetor[j]     = vetor[j + 1];	// A POSIÇAO ATUAL DO J TROCA DE VALOR COM A PRÓXIMA
				vetor[j + 1] = aux;
			}
		}
	}
}