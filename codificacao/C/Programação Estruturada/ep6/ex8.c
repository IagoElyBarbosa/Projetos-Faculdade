#include <stdio.h>

void leVetor(int *vet, int tam);
int descobre_maior(int *vet, int tam, int *maior);

int main(void){
    int tam, maior=0;
    
    scanf("%d", &tam);
    
    int vet[tam];
    
    leVetor(vet, tam);
    descobre_maior(vet, tam, &maior);
    printf("O numero %d ocorreu %d vezes.\n", maior, descobre_maior(vet, tam, &maior));
    
    return 0;
}

void leVetor(int *vet, int tam){
    int i;
    for(i=0;i<tam;i++){
        scanf("%d", &vet[i]);
    }
}

int descobre_maior(int *vet, int tam, int *maior){
    int i, count=0;
    
    for(i=0;i<tam;i++){
        if(vet[i] > *maior){
            *maior = vet[i];
        }
    }
    for(i=0;i<tam;i++){
        if(vet[i] == *maior){
            count++;
        }
    }return count;
}