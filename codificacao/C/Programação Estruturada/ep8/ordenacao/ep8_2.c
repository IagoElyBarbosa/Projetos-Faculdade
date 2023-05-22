#include <stdio.h>
#include <stdlib.h>

void selectionSort(int *vetor, int n);
void leVetor(int *vetor, int s);
void exibeVetor(int *vetor, int s);

int main(void){
    int *vet, size;

    scanf("%d", &size);
    vet = (int *)calloc(size, sizeof(int));
    leVetor(vet, size);
    selectionSort(vet, size);
    
    exibeVetor(vet, size);
    free(vet);

    return 0;
}

void leVetor(int *vetor, int s){
    int i;

    for(i=0;i<s;i++){
        scanf("%d", &vetor[i]);
    }

}

void selectionSort(int *vetor, int s){
    int i, j, menor=0, aux=0;
    
    for(i=0;i<(s-1);i++){
        menor = i;
        for(j=(i+1);j<s;j++){
            if(vetor[j] > vetor[menor]){
                menor = j;
            }
        }if(menor != i){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
}

void exibeVetor(int *vetor, int s){
    int i;

    for(i=0;i<s;i++){
        printf("%d ", vetor[i]);
    }
}

