#include "myBiblio_fila_dinamica.h"

int main(void){
    return 0;
}

Fila* cria_fila(){
    Fila *fi;

    fi = (Fila *)malloc(sizeof(Fila));

    if(fi != NULL){
        fi->ini = NULL;
        fi->fim = NULL;
        fi->qtd = 0;
    }

    return fi;
}

int insere_fila(Fila *fi, int n){
    if(fi == NULL){
        return 0;
    }else{
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));

        if(no == NULL){
            return 0;
        }else{
            no->num = n;
            no->prox = NULL;

            if(fi->fim == NULL){
                fi->ini = no;
                return 1;
            }else{
                fi->fim->prox = no;
            }

            fi->fim = no;
            fi->qtd++;
            return 1;
        }
    }
}

int remove_fila(Fila *fi){
    if(fi == NULL){
        return 0;
    }else{
        if(fi->ini == NULL){
            return 0;
        }else{
            Elem *no = fi->ini;
            fi->ini = fi->ini->prox;
            free(no);

            if(fi->ini == NULL){
                fi->fim = NULL;
            }

            fi->qtd--;
            return 1;
        }
    }
}

void libera_fila(Fila *fi){
    Elem *aux = NULL;

    while(fi->ini != NULL){
        aux = fi->ini;
        fi->ini = fi->ini->prox;
        free(aux);
    }free(fi);
}