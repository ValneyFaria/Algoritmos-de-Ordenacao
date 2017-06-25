#include <stdio.h>

void bubbleSort(int *, int);
void imprimeCrescente(int *, int);
void imprimeDecrescente(int *, int);

int main() {
	int i, numdig[10];
	
	printf("Insira 10 valores:\n");

	for(i = 0; i < 10; i++) 	{
		scanf("%d", &numdig[i]);
	}
	
	bubbleSort(numdig, 10); // USA PONTEIROS PARA PASSAR COMO PARÂMETROS OS ENDEREÇOS DO VETOR NUMDIG
	
	printf("O vetor ordenado crescente eh:\n");
	imprimeCrescente(numdig, 10);

	printf("\nO vetor ordenado Decrescente eh:\n"); // O VETOR NAO ESTA DE FATO ORDENADO DECRESCENTE
	imprimeDecrescente(numdig, 10);
	
	return 0;
}

void bubbleSort(int *vetor, int sizeVet) {
	int k, j, aux;

    for (k = sizeVet - 1; k > 0; k--) { 		// PERCORRE O VETOR DO FINAL PARA O INICIO
        for (j = 0; j < k; j++) { 				// J SAI DA POSIÇÃO 0 E PERCORRE ATÉ O I
            if (vetor[j] > vetor[j + 1]) { 		// SE A POSIÇÃO EM QUE J ESTÁ CONTIVER UM VALOR MENOR QUE A PROXIMA POSIÇÃO
                aux          = vetor[j];		// A POSIÇAO ATUAL DO J TROCA DE VALOR COM A PRÓXIMA
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

void imprimeCrescente(int *vetor, int sizeVet) {
	int i = 0;

	for(i = 0; i < 10; i++) {
		printf("%d	", vetor[i]);
	}
}

void imprimeDecrescente(int *vetor, int sizeVet) {
	int i = 0;

	for(i = sizeVet - 1; i > 0; i--) {
		printf("%d	", vetor[i]);
	}
}