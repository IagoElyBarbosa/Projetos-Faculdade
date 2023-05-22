#include <stdio.h>

void selectionSort(int *vetor, int n);

int main(void){
    int vet[6] = {8, -4, 11, 34, 5, -20};

    selectionSort(vet, 6);

    for(int i=0;i<6;i++){
        printf("%d ", vet[i]);
    }printf("\n");
}

void selectionSort(int *vetor, int n){
    int menor=0, aux=0;

    for(int i=0;i<(n-1);i++){
        menor = i;
        for(int j=i+1;j<n;j++){
            if(vetor[j]<vetor[menor]){
                menor = j;
            }
        }

        if(menor != i){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
}

// Algoritmo com eficiencia media em ocasioes com grande quantidade de dados