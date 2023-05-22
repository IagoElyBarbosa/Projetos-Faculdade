#include <stdio.h>
#include <stdlib.h>

void remov_num(int l, int c, int n_linhas, int n_colunas, int m[n_linhas][n_colunas]);


int main(void){
    int n_linhas, n_colunas, l, c;

    scanf("%d %d", &l, &c);
    scanf("%d %d", &n_linhas, &n_colunas);
    
    int m[n_linhas][n_colunas];
    
    for(int i=0; i<n_linhas; i++) {
        for(int j=0; j<n_colunas; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    
    remov_num(l, c, n_linhas, n_colunas, m);
    
    
    for(int i=0; i<n_linhas; i++) {
        for(int j=0; j<n_colunas;j++) {
            printf("%d ", m[i][j]);
        }printf("\n");
    }
}



void remov_num(int l, int c, int n_linhas, int n_colunas, int m[n_linhas][n_colunas]){
    
    int target = m[l][c];
    
    m[l][c] = 0;
    
   if(l > 0){
       if(m[l-1][c] == target) {
           remov_num(l-1, c, n_linhas, n_colunas, m);
       }
   }
    
    if(c > 0){
       if(m[l][c-1] == target) {
           remov_num(l, c-1, n_linhas, n_colunas, m);
       }
   }
    
    if(l < (n_linhas - 1)){
       if(m[l+1][c] == target) {
           remov_num(l+1, c, n_linhas, n_colunas, m);
       }
   }
   
   if(l > 0){
       if(m[l][c+1] == target) {
           remov_num(l, c+1, n_linhas, n_colunas, m);
       }
   }
    
}