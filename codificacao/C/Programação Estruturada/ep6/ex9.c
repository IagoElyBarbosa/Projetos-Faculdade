#include <stdio.h>

void leMatriz(int matriz[3][3]);
void calcPtr(int matriz[3][3], int *pMat);

int main(void){
    int mat[3][3], *pMat=NULL;
    
    leMatriz(mat);
    
    pMat = &mat[0][0];
    calcPtr(mat, pMat);
    
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

void calcPtr(int matriz[3][3], int *pMat){
    int i;
    for(i=0;i<9;i++){
        *(pMat + i) = *(pMat + i) + 1;
    }
    
    for(i=0;i<9;i++){
        printf("%d\n", *(pMat + i));
    }
}