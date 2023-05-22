#include <stdio.h>
#include <stdlib.h>

#define tamArray 30

struct pilha{
    int qtd;
    int num[tamArray];
};

typedef struct pilha Pilha;

Pilha* cria_pilha();
int insere_pilha(Pilha *pi, int n);
int remove_pilha(Pilha *pi);
void imprime_pilha(Pilha *pi);
void libera_pilha(Pilha *pi);

int main(void){
    int size, n;
    Pilha *pi, *pi2;
    
    pi = cria_pilha();
    pi2 = cria_pilha();
    
    scanf("%d", &size);
    
    for(int i=0;i<size;i++){
        scanf("%d", &n);
        printf("%d\n", insere_pilha(pi, n));
    }
    
    for(int i=0;i<4;i++){
        insere_pilha(pi2, remove_pilha(pi));
    }
    
    imprime_pilha(pi);
    imprime_pilha(pi2);
    
    libera_pilha(pi);
    libera_pilha(pi2);
    
    return 0;
}

Pilha* cria_pilha(){
    Pilha *pi=NULL;
    
    pi = (Pilha *)malloc(sizeof(Pilha));
    
    if(pi != NULL){
        pi->qtd = 0;
    }
    
    return pi;
}

int insere_pilha(Pilha *pi, int n){
    if(pi == NULL){
        return 0;
    }else{
        if(pi->qtd == tamArray){
            return 0;
        }else{
            pi->num[pi->qtd] = n;
            pi->qtd++;
            return 1;
        }
    }
}

int remove_pilha(Pilha *pi){
    int n;
    n = pi->num[pi->qtd - 1];
    pi->qtd--;
    return n;
}

void imprime_pilha(Pilha *pi){
    int i;
    
    for(i=0;i<pi->qtd;i++){
        printf("%d ", pi->num[i]);
    }printf("\n");
}

void libera_pilha(Pilha *pi){
    free(pi);
}