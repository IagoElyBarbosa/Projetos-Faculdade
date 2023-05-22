#include <stdio.h>

void insertSort(int *vetor, int n);

int main(void){
    int vet[6] = {8, -4, 11, 34, 5, -20};

    insertSort(vet, 6);

    for(int i=0;i<6;i++){
        printf("%d ", vet[i]);
    }printf("\n");
}

void insertSort(int *vetor, int n){
    int i=0, j=0, atual=0;

    for(i=0;i<n;i++){
        atual = vetor[i];
        j=i;

        while(j>0&&atual<vetor[j - 1]){
            vetor[j] = vetor[j - 1];
            j--;
        }

        vetor[j] = atual;
    }
}

// Algoritmo mais eficiente
// Um dos mais rapidos quando se trata de pouca quantidade de dados
// Elementos iguais nao mudam durante a ordenacao
// Ordena elementos a medida que os recebe
