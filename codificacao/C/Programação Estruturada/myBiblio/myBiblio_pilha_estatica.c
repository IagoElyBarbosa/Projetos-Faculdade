#include "myBiblio_pilha_estatica.h"

int main(void){
    return 0;
}

int insere_pilha(Pilha *pi, int n){
    if(pi == NULL){
        return 0;
    }else{
        if(pi->qtd == tamArray){
            return 0;
        }else{
            pi->array[pi->qtd] = n;
            pi->qtd++;
            return 1;
        }
    }
}

int remove_pilha(Pilha *pi){
    if(pi == NULL){
        return 0;
    }else{
        if(pi->qtd = 0){
            return 0;
        }else{
            pi->qtd--;
            return 1;
        }
    }
}