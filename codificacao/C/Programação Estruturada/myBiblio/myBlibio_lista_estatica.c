#include "myBlibio_lista_estatica.h"

int main(void){
    return 0;
}

Lista* cria_lista(){
    Lista *li;

    li = (Lista *)malloc(sizeof(Lista));

    if(li != NULL){
        li->qtd = 0;
    }
    return li;
}

void libera_lista(Lista *li){
    free(li);
}

int tamanho_lista(Lista *li){
    int tam=0;
    if(li == NULL){
        return 0;
    }else{
        tam = li->qtd;
        return 1;
    }
}

int lista_cheia(Lista *li){
    if(li == NULL){
        return 0;
    }else{
        if(li->qtd == tamMax){
            return 1;
        }else{
            return 0;
        }
    }
}

int lista_vazia(Lista *li){
    if(li == NULL){
        return 0;
    }else{
        if(li->qtd == 0){
            return 1;
        }else{
            return 0;
        }
    }
}
int insere_lista(Lista *li, int n){
    if(li != NULL){
        return 0;
    }else{
        if(li->qtd == tamMax){
            return 0;
        }else{
            li->array[li->qtd] = n;
            li->qtd++;
            return 1;
        }
    }
}

int insere_lista_inicio(Lista *li, int n){
    if(li == NULL){
        return 0;
    }else{
        if(li->qtd == tamMax){
            return 0;
        }else{
            for(int i=(li->qtd - 1);i>=0;i--){
                li->array[i + 1] = li->array[i];
            }
            li->array[0] = n;
            li->qtd++;
            return 1;
        }
    }
}

int remove_lista_inicio(Lista *li){
    if(li == NULL){
        return 0;
    }else{
        if(li->qtd == 0){
            return 0;
        }else{
            for(int i=0;i<(li->qtd - 1);i++){
                li->array[i] = li->array[i+1];
            }
            li->qtd--;
            return 1;
        }
    }
}

int remove_lista_final(Lista *li){
    if(li == NULL){
        return 0;
    }else{
        if(li->qtd == 0){
            return 0;
        }else{
            li->qtd--;
            return 1;
        }
    }
}

int remove_lista_elemento(Lista *li, int elem){
    int i=0, count=0;
    if(li == NULL){
        return 0;
    }else{
        while(i < li->qtd && li->array[i] != elem){
            count++;
        }

        if(i == 0){
            return 0;
        }

        for(i=count; i<(li->qtd - 1); i++){
            li->array[i] = li->array[i+1];
        }

        li->qtd--;
        return 1;
    }
}
int busca_lista_pos(Lista *li, int pos){
    int resp=0;
    if(li == NULL || pos <= 0 || pos > li->qtd){
        return 0;
    }else{
        resp = li->array[pos - 1];
        return 1;
    }
}
int busca_lista_counteudo(Lista *li, int conteu){
    int i=0, resp=0;
    if(li == NULL){
        return 0;
    }else{
        while(i<li->qtd && li->array[i] != conteu){
            i++;
        }

        if(i == 0){
            return 0;
        }else{
            return i;
        }
    }
}

void imprime_lista(Lista *li){

    for(int i=0;i<qtd;i++){
        printf("%d ", li->array[i]);
    }printf("\n");
}