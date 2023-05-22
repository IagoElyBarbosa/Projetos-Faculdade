#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *vetor, int s);
void leVetor(int *vetor, int s);
void exibeVetor(int *vetor, int s);

int main(void){
    int *vet, size;

    scanf("%d", &size);
    vet = (int *)calloc(size, sizeof(int));
    leVetor(vet, size);
    insertionSort(vet, size);
    
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

void insertionSort(int *vetor, int s){
    int i, j, atual=0;
    
    for(i=1;i<s;i++){
        atual = vetor[i];
        j = i;
        
        while(j>0&&atual>vetor[j-1]){
            vetor[j] = vetor[j-1];
            j--;
        }
        vetor[j] = atual;
    }
}

void exibeVetor(int *vetor, int s){
    int i;

    for(i=0;i<s;i++){
        printf("%d ", vetor[i]);
    }
}
