#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *vetor, int n);
void leVetor(int *vetor, int s);
void exibeVetor(int *vetor, int s);

int main(void){
    int *vet, size;

    scanf("%d", &size);
    vet = (int *)calloc(size, sizeof(int));
    leVetor(vet, size);
    bubbleSort(vet, size);

    exibeVetor(vet, size);
    free(vet);

    return 0;
}

void bubbleSort(int *vetor, int s){
    int i, sim, aux, atual=0;

    do{
        sim = 0;
        for(i=(atual+1);i<s;i++){
            if(vetor[atual] < vetor[i]){
                aux = vetor[atual];
                vetor[atual] = vetor[i];
                vetor[i] = aux;
                sim = 1;
            }
        }atual++;
    }while(sim != 0);
}

void leVetor(int *vetor, int s){
    int i;

    for(i=0;i<s;i++){
        scanf("%d", &vetor[i]);
    }

}

void exibeVetor(int *vetor, int s){
    int i;

    for(i=0;i<s;i++){
        printf("%d ", vetor[i]);
    }
}
