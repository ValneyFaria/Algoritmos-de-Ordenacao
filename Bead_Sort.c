#include <stdlib.h>
 
void Bead_Sort(int *vetor, int TAM) {
	int i, j, max, sum;
	unsigned char *beads;

#	define BEAD(i, j) beads[i * max + j]
 
	for (i = 1, max = vetor[0]; i < TAM; i++)
		if (vetor[i] > max) max = vetor[i];
 
	beads = (unsigned char *) calloc(1, max * TAM);
 
	/* mark the beads */
	for (i = 0; i < TAM; i++)
		for (j = 0; j < vetor[i]; j++)
			BEAD(i, j) = 1;
 
	for (j = 0; j < max; j++) {
		/* count how many beads are on each post */
		for (sum = i = 0; i < TAM; i++) {
			sum += BEAD(i, j);
			BEAD(i, j) = 0;
		}
		/* mark bottom sum beads */
		for (i = TAM - sum; i < TAM; i++) BEAD(i, j) = 1;
	}
 
	for (i = 0; i < TAM; i++) {
		for (j = 0; j < max && BEAD(i, j); j++);
		vetor[i] = j;
	}
	free(beads);
}