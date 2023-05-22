#include <stdio.h>

void soma_ptr(int *a, int*b);

int main(void){
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    soma_ptr(&a, &b);
    
    printf("%d\n%d\n", a, b);
    
    return 0;
}

void soma_ptr(int *a, int*b){
    int soma=0;
    
    soma = *a+*b;
    *a = soma;
}