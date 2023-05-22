#include <stdio.h>

void bubbleSort(int *vetor, int n);

int main(void){
    int vet[6] = {8, -4, 11, 34, 5, -20};

    bubbleSort(vet, 6);

    for(int i=0;i<6;i++){
        printf("%d ", vet[i]);
    }printf("\n");

    return 0;
}

void bubbleSort(int *vetor, int n){
    int sim=0, aux=0;

    do{
        sim=0;
        for(int i=0;i<(n-1);i++){
            if(vetor[i]>vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                sim=1;
            }
        }
    }while(sim!=0);
}

// Algoritmo pouco eficiente em ocasioes de grande quantidade de dados.