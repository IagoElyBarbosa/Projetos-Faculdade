#include <stdio.h>

void funcao(int a, int b, int *resultado);


int main(void){
    
    int a, b, *resultado=NULL;
    
    scanf("%d %d", &a, &b);
    
    resultado = &a;
    
    funcao(a, b, resultado);

    printf("%d\n", *resultado);
    
    return 0;
}

void funcao(int a, int b, int *resultado) {
    
    int interno = 0, externo = 0;
    
    for(int i=1; i<=a; i++) {
        
        interno = 0;
        
        for(int j=1; j<=b; j++){
            interno += (i * j + 10);
        }
        
        externo += (5 * i * interno);
    }
    
    *resultado = externo;
}