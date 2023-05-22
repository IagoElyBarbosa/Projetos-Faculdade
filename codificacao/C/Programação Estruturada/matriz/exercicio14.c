#include <stdio.h>

void leMatriz(int matriz[3][3]);
void funcaoPrincipal(int matriz[3][3]);

int main(void){
    int mat[3][3];
    
    leMatriz(mat);
    funcaoPrincipal(mat);
    
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

void funcaoPrincipal(int matriz[3][3]){
    int i, j, maior=0, menor=9999, l1=0, c1=0, l2=0, c2=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
                l1 = i;
                c1 = j;
            }if(menor > matriz[i][j]){
                menor = matriz[i][j];
                l2 = i;
                c2 = j;
            }
        }
    }
    printf("Maior: %d\n", maior);
    printf("Posicao (maior): %d linha e %d coluna\n", l1, c1);
    printf("Menor: %d\n", menor);
    printf("Posicao (menor): %d linha e %d coluna\n", l2, c2);
}