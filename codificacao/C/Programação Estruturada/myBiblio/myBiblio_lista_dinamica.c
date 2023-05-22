#include "myBiblio_lista_dinamica.h"

Lista* cria_lista(){
    Lista *li;

    li = (Lista *)malloc(sizeof(Lista));

    if(li != NULL){
        *li = NULL;
    }

    return li;
}

void libera_lista(Lista *li){

    if(li != NULL){
        Elem *aux;

        while((*li) != NULL){
            aux = *li;
            *li = (*li)->prox;
            free(aux);
        }free(li);
    }
}

int insere_lista_inicio(Lista *li, int n){
    if(li == NULL){
        return 0;
    }else{
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));

        if(no == NULL){
            return 0;
        }else{
            no->num = n;
            no->prox = *li;
            *li = no;
            return 1;
        }
    }
}

int insere_lista_final(Lista *li, int n){
    if(li == NULL){
        return 0;
    }else{
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));

        if(no == NULL){
            return 0;
        }else{
            no->num = n;
            no->prox = NULL;

            if((*li) == NULL){
                *li = no;
                return 1;
            }else{
                Elem *aux = *li;

                while(aux->prox != NULL){
                    aux = aux->prox;
                }

                aux->prox = no;
                return 1;
            }
        }
    }
}

int remove_lista_inicio(Lista *li){
    if(li == NULL){
        return 0;
    }else if((*li) == NULL){
        return 0;
    }else{
        Elem *aux = *li;
        (*li) = aux->prox;
        free(aux);
        return 1;
    }
}

int remove_lista_final(Lista *li){
    if(li == NULL){
        return 0;
    }else{
        Elem *aux=NULL, *no=*li;

        while(no->prox != NULL){
            aux = no;
            no = no->prox;
        }

        if(no == *li){
            *li = no->prox;
        }else{
            aux->prox = no->prox;
        }

        free(no);
        return 1;
    }
}

int remove_lista_meio(Lista *li, int elem){
    if(li == NULL){
        return 0;
    }else{
        Elem *aux=NULL, *no = *li;

        while(no != NULL && no->num != elem){
            aux = no;
            no = no->prox;
        }

        if(no == NULL){
            return 0;
        }else{
            if(no == *li){
                *li = no->prox;
            }else{
                aux->prox = no->prox;
            }

            free(no);
            return 1;
        }
    }
}

int main(void){
    return 0;
}