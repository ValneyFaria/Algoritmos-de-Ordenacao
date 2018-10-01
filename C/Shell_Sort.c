void Shell_Sort(int vetor[], int TAM) {
    int i , j , value;
    int gap = 1;

    while(gap < TAM) {
        gap = 3*gap+1;
    }

    while (gap > 1) {
        gap /= 3;
        for(i = gap; i < TAM; i++) {
            value = vetor[i];
            j = i - gap;
            while (j >= 0 && value < vetor[j]) {
                vetor [j + gap] = vetor[j];
                j -= gap;
            }
            vetor [j + gap] = value;
        }
    }
}