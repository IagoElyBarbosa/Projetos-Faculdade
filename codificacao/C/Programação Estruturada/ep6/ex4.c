#include <stdio.h>

void maior_na_frente(int *a, int*b);

int main(void){
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    maior_na_frente(&a, &b);
    
    printf("%d\n%d\n", a, b);
    
    return 0;
}

void maior_na_frente(int *a, int*b){
    int aux=0;
    
    if(*a > *b){
        *a = *a;
    }else{
        aux = *a;
        *a = *b;
        *b = aux;
    }
}