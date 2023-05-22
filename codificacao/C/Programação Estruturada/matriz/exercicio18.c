#include <stdio.h>

void leMatriz(int matriz[3][3]);
void calculaVet(int matriz[3][3], int vetor[3]);
void exibeVetor(int vetor[3]);

int main(void){
    int mat[3][3], vet[3], i;
    
    leMatriz(mat);
    
    for(i=0;i<3;i++){
        vet[i] = 0;
    }
    
    calculaVet(mat, vet);
    exibeVetor(vet);
    return 0;
}

void leMatriz(int matriz[3][3]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

void calculaVet(int matriz[3][3], int vetor[3]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j == 0){
                vetor[0] += matriz[i][j];
            }else if(j == 1){
                vetor[1] += matriz[i][j];
            }else{
                vetor[2] += matriz[i][j];
            }
        }
    }
}

void exibeVetor(int vetor[3]){
    int i;
    for(i=0;i<3;i++){
        printf("%d ", vetor[i]);
    }
}