#include <stdio.h>
#include <math.h>


int main(void){
    int l, c, i, j;
    scanf("%d %d", &l, &c);
    
    int mat[l][c];
    
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            if(i < j){
                mat[i][j] =  2 * i + 7 * j - 2;
            }else if(i == j){
                mat[i][j] =  3 * (int)(pow(i, 2))  - 1;
            }else{
                mat[i][j] = 4 * (int)(pow(i, 3)) + 5 * (int)(pow(j, 2)) + 1;
            }
        }
    }
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("%d ", mat[i][j]);
        }printf("\n");
    }
    return 0;
}

     