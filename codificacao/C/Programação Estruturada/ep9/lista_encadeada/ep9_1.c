#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int valor;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *Lista;

int insere_lista_final(Lista *li, int n);
Lista* cria_lista();
int remove_lista(Lista *li);
void lista1_imprime(Lista *lista);

int main(void){
    int i, n;
    Lista *li;
    
    li =  cria_lista();
    
    for(i=0;i<6;i++){
        scanf("%d", &n);
        printf("%d\n", insere_lista_final(li, n));
    }
    
    printf("%d\n", remove_lista(li));
    
    lista1_imprime(li);
    
    return 0;
}

Lista* cria_lista(){
    Lista *li;
    
    li = (Lista *)malloc(sizeof(Lista));
    
    if(li != NULL){
        *li = NULL;
    }
    
    return li;
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
            no->valor = n;
            no->prox = NULL;
            
            if((*li) == NULL){
                *li = no;
                return 1;
            }else{
                Elem *aux;
                aux = *li;
                
                while(aux->prox != NULL){
                    aux = aux->prox;
                }
                
                aux->prox = no;
                
                return 1;
            }
        }
    }
}

int remove_lista(Lista *li){
    int aux;
    if(li == NULL){
        return 0;
    }else if((*li) == NULL){
        return 0;
    }else{
        Elem *marcador;
        marcador = *li;
        
        while(marcador->prox != NULL){
            marcador = marcador->prox;
        }
        
        aux = marcador->valor;
        
        Elem *ant;
        
        for(int i=0;i<aux;i++){
            ant = *li;
            *li = ant->prox;
            free(ant);
        }
        
        return 1;
    }
}

void lista1_imprime(Lista *lista){
  Elem *no = *lista;
  while (no != NULL) {
    printf("%d ", no->valor);
    no = no->prox;
  }
  printf("\n");
}