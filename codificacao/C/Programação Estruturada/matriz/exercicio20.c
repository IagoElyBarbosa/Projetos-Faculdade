#include <stdio.h>


int main(void){
    int l, c, i, j;
    scanf("%d %d", &l, &c);
    
    int mat[l][c], matAux[c][l];
    
    // pegando os valores linha por linha, depois mudando a coluna
    
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    // matriz auxiliar
    
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            matAux[j][i] = mat[i][j];
        }
    }
    
    for(i=0;i<c;i++){
        for(j=0;j<l;j++){
            printf("%d ", matAux[i][j]);
        }printf("\n");
    }
    
    return 0;
}