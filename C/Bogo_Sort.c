#include <stdlib.h>
#include <stdbool.h>
 
bool is_sorted(int vetor[], int TAM) {
  while (--TAM >= 1) {
    if (vetor[TAM] < vetor[TAM-1]) return false;
  }
  return true;
}
 
void shuffle(int vetor[], int TAM) {
  int i, t, r;
  for(i=0; i < TAM; i++) {
    t = vetor[i];
    r = rand() % TAM;
    vetor[i] = vetor[r];
    vetor[r] = t;
  }
}
 
void Bogo_Sort(int vetor[], int TAM) {
  while (!is_sorted(vetor, TAM)) shuffle(vetor, TAM);
}