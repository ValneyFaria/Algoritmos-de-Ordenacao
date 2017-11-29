#include <stdio.h>

#define SWAP(r, s) \
    do {           \
        t = r;     \
        r = s;     \
        s = t;     \
    } while (0)

void Stooge_Sort(int vetor[], int i, int j) {
    int t;

    if (vetor[j] < vetor[i])
        SWAP(vetor[i], vetor[j]);
    if (j - i > 1) {
        t = (j - i + 1) / 3;
        Stooge_Sort(vetor, i, j - t);
        Stooge_Sort(vetor, i + t, j);
        Stooge_Sort(vetor, i, j - t);
    }
}