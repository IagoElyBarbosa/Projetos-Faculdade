#include <stdio.h>

void leVetor(int size, int vetor[]);
void ordenaVetor(int size, int vetor[]);
void exibeVetor(int size, int vetor[]);

int main(void){
    int vet[10];

    leVetor(10, vet);
    exibeVetor(10, vet);
    ordenaVetor(10, vet);
    exibeVetor(10, vet);

    return 0;
}

void leVetor(int size, int vetor[]){
    int i;
    for(i=0;i<size;i++){
        scanf("%d", &vetor[i]);
    }
}

void ordenaVetor(int size, int vetor[]){
    int i, j, aux=0;
    for(i=0;i<(size-1);i++){
        for(j=(i+1);j<size;j++){
            if(vetor[i] > vetor[j]){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            }
        }
    }
}

void exibeVetor(int size, int vetor[]){
    int i;
    for(i=0;i<size;i++){
        printf("%d ", vetor[i]);
    }printf("\n");
}