#include <stdio.h>
#include <stdlib.h>

// Sort an array in place
void Cycle_Sort(int vetor[], size_t TAM) {

	/* Loop through the array to find cycles to rotate. */
	for (int cycleStart = 0; cycleStart < TAM - 1; ++cycleStart) {
		int item = vetor[cycleStart];
		int swap_tmp;

		/* Find where to put the item. */
		int pos = cycleStart;
		for (int i = cycleStart + 1; i < TAM; ++i) {
			if (vetor[i] < item) {
				++pos;
			}
		}

		/* If the item is already there, this is not a cycle. */
		if (pos == cycleStart) {
			continue;
		}

		/* Otherwise, put the item there or right after any duplicates. */
		while (item == vetor[pos]) {
			++pos;
		}
		swap_tmp = vetor[pos];
		vetor[pos] = item;
		item = swap_tmp;

		/* Rotate the rest of the cycle. */
		while (pos != cycleStart) {
			/* Find where to put the item. */
			pos = cycleStart;
			for (int i = cycleStart + 1; i < TAM; ++i) {
				if (vetor[i] < item) {
					++pos;
				}
			}

			/* Put the item there or right after any duplicates. */
			while (item == vetor[pos]) {
				++pos;
			}
			swap_tmp = vetor[pos];
			vetor[pos] = item;
			item = swap_tmp;
		}
	}
}