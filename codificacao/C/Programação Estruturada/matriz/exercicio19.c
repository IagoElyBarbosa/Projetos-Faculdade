#include <stdio.h>

void leMatriz(int matriz[4][4]);
void defineTipoMat(int matriz[4][4]);

int main(void){
    int mat[4][4];
    
    leMatriz(mat);
    defineTipoMat(mat);
    
    return 0;
}

void leMatriz(int matriz[4][4]){
    int i, j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

void defineTipoMat(int matriz[4][4]){
    int i, j, count1=0, count2=0;
    
    // contador da diagonal superior
    
    for(i=0;i<4;i++){
        for(j=i;j<4;j++){
            if(j != i){
                if(matriz[i][j] != 0){
                    count1++;
                }
            }
        }
    }
    
    // contador da diagonal inferior
    
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            if(j != i){
                if(matriz[i][j] != 0){
                    count2++;
                }
            }
        }
    }
    
    if(count1 == 0 && count2 == 0){
        printf("Matriz Diagonal!!!\n");
    }else if(count1 == 0 && count2 != 0){
        printf("Matriz Triangular Inferior!!!\n");
    }else if(count1 != 0 && count2 == 0){
        printf("Matriz Triangular Superior!!!\n");
    }else{
        printf("Nao se Enquadra!!!\n");
    }
}