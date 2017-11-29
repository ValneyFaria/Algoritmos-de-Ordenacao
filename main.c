#include <stdio.h>
#include "Bead_Sort.c"
#include "Heap_Sort.c"
#include "Merge_Sort.c"
#include "Radix_Sort.c"
#include "Bubble_Sort.c"
#include "Selection_Sort.c"

#define TAM 10

int main() {
	int vai = 1, aux = 0;
	int i = 0, vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	while (vai == 1) {
		printf("Digite um valor para escolher qual algoritmo testar:\n");
		printf("1 - Bubble Sort\n2 - Selection Sort\n3 - Merge Sort\n");
		printf("4 - Heap Sort\n5 - Quick Sort\n6 - Radix Sort\n");
		
		// printf("Deseja Rodar novamente? 1 - SIM, 0 - NAO\n");
		// scanf("%d\n", &vai);
		aux++;
		if (aux) {
			vai = 0;
		}
	}
	
	// Bubble_Sort(vetor, TAM); // USA PONTEIROS PARA PASSAR COMO PARÂMETROS OS ENDEREÇOS DO VETOR NUMDIG
	// Selection_Sort(vetor, TAM);
	// Merge_Sort(vetor, 0, TAM - 1);
	// Heap_Sort(vetor, TAM);
	// Radix_Sort(vetor, TAM);
	// Bead_Sort(vetor, TAM);

	
	printf("O vetor ordenado crescente eh:\n");
	imprimeCrescente(vetor, TAM);
	
	return 0;
}