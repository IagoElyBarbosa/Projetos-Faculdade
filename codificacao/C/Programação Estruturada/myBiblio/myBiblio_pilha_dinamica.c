#include "myBiblio_pilha_dinamica.h"

int void(main){
    return 0;
}

int remove_pilha(Pilha *pi){
    if(pi == NULL){
        return 0;
    }else{
        if((*pi) == NULL){
            return 0;
        }else{
            Elem *no=*pi;
            (*pi) = no->prox;

            free(no);
            return 1;
        }
    }
}

int insere_pilha(Pilha *pi, int n){
    if(pi == NULL){
        return 0;
    }else{
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));

        if(no == NULL){
            return 0;
        }else{
            no->num = n;
            no->prox = *pi;
            *pi = no;

            return 1;
        }
    }
}