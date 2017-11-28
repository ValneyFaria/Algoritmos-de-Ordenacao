#include <stdio.h>
#include "Bubble_Sort.c"

int main() {
	int i = 0, vai = 1, numdig[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

	while (vai == 1) {
		printf("Digite um valor para escolher qual algoritmo testar:\n");
		printf("1 - Bubble Sort\n2 - Selection Sort\n3 - Merge Sort\n");
		printf("4 - Heap Sort\n5 - Quick Sort\n6 - Radix Sort\n");
		
		// printf("Deseja Rodar novamente? 1 - SIM, 0 - NAO\n");
		// scanf("%d\n", &vai);
	}
	

	Bubble_Sort(numdig, 10); // USA PONTEIROS PARA PASSAR COMO PARÂMETROS OS ENDEREÇOS DO VETOR NUMDIG
	
	printf("O vetor ordenado crescente eh:\n");
	imprimeCrescente(numdig, 10);
	
	return 0;
}