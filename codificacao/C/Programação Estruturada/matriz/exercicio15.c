#include <stdio.h>


int main(void){
    int L, i, j, C;
    
    scanf("%d", &L);
    
    C = L;
    
    int mat[L][C];
    
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            mat[i][j] = 0;
        }
    }
    for(i=0;i<L;i++){
        for(j=i;j<C;j++){
            if(j == i){
                mat[i][j] = 1;
            }
        }
    }
    for(i=0;i<L;i++){
        for(j=0;j<C;j++){
            printf("%d ", mat[i][j]);
        }printf("\n");
    }
    return 0;
}

