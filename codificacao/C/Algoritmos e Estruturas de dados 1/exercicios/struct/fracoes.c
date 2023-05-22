#include <stdio.h>
#include <stdlib.h>

struct fracao {
    int numerador, denominador;  
};

typedef struct fracao Fracao;

Fracao create_fracao();
Fracao somar(Fracao f1, Fracao f2);
Fracao somar_vetor(Fracao f[], int n_fracoes);
Fracao multiplicar(Fracao f1, Fracao f2);
Fracao multiplicar_vetor(Fracao f[], int n_fracoes);
int mdc(int a, int b);

int main(void) {
    
    Fracao f1, f2, fx;
    
    f1 = create_fracao();
    f2 = create_fracao();
    fx = create_fracao();
    
    f1.numerador = 1;
    f1.denominador = 2;
    
    f2.numerador = 3;
    f2.denominador = 6;
    
    
    fx = somar(f1, f2);
    
    printf("%d\n", fx.numerador);
    printf("%d\n", fx.denominador);
    
    Fracao f_vet[4];
    
    f_vet[0].numerador = 3;
    f_vet[0].denominador = 2;
    
    f_vet[1].numerador = 3;
    f_vet[1].denominador = 6;
    
    f_vet[2].numerador = 5;
    f_vet[2].denominador = 25;
    
    f_vet[3].numerador = 7;
    f_vet[3].denominador = 5;
    
    fx = somar_vetor(f_vet, 4);
    
    printf("%d\n", fx.numerador);
    printf("%d\n", fx.denominador);
    
    return 0;
}

Fracao create_fracao() {
    Fracao fx;
    
    fx.numerador = 0;
    fx.denominador = 0;
    
    return fx;
}

int mdc(int a, int b){
    
    if(a==0)return b;
    if(b==0)return a;
    
    return mdc(b, a%b);
}

Fracao somar(Fracao f1, Fracao f2){
    int a, b;
    Fracao fx;
    
    fx.denominador = f1.denominador * f2.denominador;
    fx.numerador = f1.numerador * f2.denominador + f2.numerador * f1.denominador;
    
    a = fx.numerador;
    b = fx.denominador;
    
    fx.numerador /= mdc(a, b);
    fx.denominador /= mdc(a, b);
    
    return fx;

}

Fracao multiplicar(Fracao f1, Fracao f2){
    int a, b;
    Fracao fx;
    
    fx.numerador = (f1.numerador * f2.numerador);
    fx.denominador = (f1.denominador * f2.denominador);
    
    a = fx.numerador;
    b = fx.denominador;
    
    fx.numerador /= mdc(a, b);
    fx.denominador /= mdc(a, b);
    
    return fx;
}

Fracao somar_vetor(Fracao f[], int n_fracoes){
    int a, b;
    Fracao fx = {0, 1};
    
    for (int i=0; i<n_fracoes; i++) {

        fx.numerador = (fx.numerador * f[i].denominador) + (f[i].numerador * fx.denominador);
        fx.denominador = fx.denominador * f[i].denominador;
    }
    
    a = fx.numerador;
    b = fx.denominador;
    
    fx.numerador /= mdc(a, b);
    fx.denominador /= mdc(a, b);
    
    return fx;
}

Fracao multiplicar_vetor(Fracao f[], int n_fracoes){
    int a, b;
    Fracao fx = {0, 1};
    
    fx.numerador = f[0].numerador;
    fx.denominador = f[0].denominador;
    
    for (int i=1; i<n_fracoes; i++) {
        fx.numerador = fx.numerador * f[i].numerador;
        fx.denominador = fx.denominador * f[i].denominador;
    }
    
    a = fx.numerador;
    b = fx.denominador;
    
    fx.numerador /= mdc(a, b);
    fx.denominador /= mdc(a, b);
    
    return fx;
}
