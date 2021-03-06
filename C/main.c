#include <stdio.h>
#include "Bogo_Sort.c"
#include "Bead_Sort.c"
#include "Heap_Sort.c"
#include "Comb_Sort.c"
#include "Merge_Sort.c"
#include "Gnome_Sort.c"
#include "Cycle_Sort.c"
#include "Radix_Sort.c"
#include "Quick_Sort.c"
#include "Strand_Sort.c"
#include "Stooge_Sort.c"
#include "Circle_Sort.c"
#include "Bubble_Sort.c"
#include "Pancake_Sort.c"
#include "Counting_Sort.c"
#include "Patience_Sort.c"
#include "Cocktail_Sort.c"
#include "Insertion_Sort.c"
#include "Selection_Sort.c"
#include "Permutation_Sort.c"

#define TAM 10

int main() {
	int vai = 1, aux = 0;
	int i = 0, vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	// int TAM = sizeof vetor / sizeof vetor[0]; // DESCOBRIR O TAMANHO DE UM VETOR

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
	// Bogo_Sort(vetor, TAM);
	// Circle_Sort(vetor, TAM);
	// Cocktail_Sort(vetor, TAM);
	// Comb_Sort(vetor, TAM);
	// Counting_Sort(vetor, TAM);
	// Cycle_Sort(vetor, TAM);
	// Gnome_Sort(vetor, TAM);
	// Insertion_Sort(vetor,TAM);
	// Pancake_Sort(vetor, TAM);
	// Patience_Sort(vetor, TAM); // NAO FUNCIONA
	Permutation_Sort(vetor, TAM); // PRECISO ENTENDER
	// Quick_Sort(vetor, TAM);
	// Stooge_Sort(vetor, 0, TAM - 1);
	// Strand_Sort(vetor, TAM);
	
	printf("Vetor ordenado crescente:\n");

	for(i = 0; i < TAM; i++) {
		printf("%d	", vetor[i]);
	} 

	return 0;
}