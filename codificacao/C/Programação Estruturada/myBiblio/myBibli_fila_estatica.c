#include "myBibli_fila_estatica.h"

int main(void){
    return 0;
}

Fila* cria_fila(){
    Fila *fi;

    fi = (Fila *)malloc(sizeof(Fila));

    if(fi != NULL){
        fi->qtd = 0;
        fi->fim = 0;
        fi->ini = 0;
    }

    return fi;
}

int insere_fila(Fila *fi, int n){
    if(fi == NULL){
        return 0;
    }else{
        if(fi->qtd == tamMax){
            return 0;
        }else{
            fi->array[fi->fim] = n;
            fi->fim = fi->fim + 1;
            fi->qtd++;

            return 1;
        }
    }
}

int remove_fila(Fila *fi){
    if(fi == NULL){
        return 0;
    }else{
        if(fi->qtd == 0){
            return 0;
        }else{
            fi->ini = fi->ini + 1;
            fi->qtd--;

            return 1;
        }
    }
}