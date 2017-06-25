#include <stdio.h>
void bubbleSort(int *vetor, int sizeVet)
{
	int i, j;

    for(i = sizeVet - 1; i >= 1; i--) // PERCORRE O VETOR DO FINAL PARA O INICIO
    {
        for(j = 0; j < i ; j++) // J SAI DA POSIÇÃO 0 E PERCORRE ATÉ O I
        {
            if(vetor[j] > vetor[j + 1]) // SE A POSIÇÃO EM QUE J ESTÁ CONTIVER UM VALOR MENOR QUE A PROXIMA POSIÇÃO
            {
                vetor[j] ^= vetor[j + 1]; // A POSIÇAO ATUAL DO J TROCA DE VALOR COM A PRÓXIMA
                vetor[j + 1] ^= vetor[j];
                vetor[j] ^= vetor[j + 1];
            }
        }
    }
}

int main()
{
	int i, numdig[10];
	
	printf("Insira 10 valores:\n");

	for(i = 0; i < 10; i++)
	{
		scanf("%d", &numdig[i]);
	}
	
	bubbleSort(numdig, 10); // USA PONTEIROS PARA PASSAR COMO PARÂMETROS OS ENDEREÇOS DO VETOR NUMDIG
	
	printf("O vetor ordenado eh:\n");

	for(i = 0; i < 10; i++)
    {
		printf("%d	", numdig[i]);
	}
	return 0;
}
