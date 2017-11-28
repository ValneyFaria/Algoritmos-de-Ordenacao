void merge(int vetor[], int comeco, int meio, int fim) {
 2     int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
 3     int *vetAux;
 4     vetAux = (int*)malloc(tam * sizeof(int));
 5 
 6     while(com1<=meio && com2<=fim){
 7         if(vetor[com1] <= vetor[com2]){
 8             vetAux[comAux] = vetor[com1];
 9             com1++;
10         }else{
11             vetAux[comAux] = vetor[com2];
12             com2++;
13         }
14         comAux++;
15     }
16 
17     while(com1<=meio){  //Caso ainda haja elementos na primeira metade
18         vetAux[comAux] = vetor[com1];
19         comAux++;com1++;
20     }
21 
22     while(com2<=fim){   //Caso ainda haja elementos na segunda metade
23         vetAux[comAux] = vetor[com2];
24         comAux++;com2++;
25     }
26 
27     for(comAux=comeco;comAux<=fim;comAux++){    //Move os elementos de volta para o vetor original
28         vetor[comAux] = vetAux[comAux-comeco];
29     }
30     
31     free(vetAux);
32 }
33 
34 void mergeSort(int vetor[], int comeco, int fim){
35     if (comeco < fim) {
36         int meio = (fim+comeco)/2;
37 
38         mergeSort(vetor, comeco, meio);
39         mergeSort(vetor, meio+1, fim);
40         merge(vetor, comeco, meio, fim);
41     }
42 }