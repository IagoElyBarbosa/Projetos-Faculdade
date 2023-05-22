#include <stdio.h>

void leMatriz(int matriz[3][3]);
int somaDiagPrin(int matriz[3][3]);
int somaDiagSecun(int matriz[3][3]);

int main(void){
    int mat[3][3];
    
    leMatriz(mat);
    printf("Soma diagonal principal: %d\n", somaDiagPrin(mat));
    printf("Soma diagonal secundaria: %d\n", somaDiagSecun(mat));
    
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

int somaDiagPrin(int matriz[3][3]){
    int i, j, soma = 0;
    
    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            if(j == i){
                soma += matriz[i][j];
            }
        }
    }return soma;
}

int somaDiagSecun(int matriz[3][3]){
    int i, j, soma = 0;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if((j == 2 && i == 0) || (j == 1 && i == 1) || (j == 0 && i == 2)){
                soma += matriz[j][i];
            }
        }
    }return soma;
}