#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *Lista;

Lista* cria_lista();
int insere_lista_final(Lista *li, int n);
void funcao(Lista *li, Lista *lista_2);
void lista_imprime(Lista *lista);
void libera_lista(Lista *li);

int main(void){
    int i, n;
    Lista *li, *li_par;
    
    li = cria_lista();
    li_par = cria_lista();
    
    for(i=0;i<5;i++){
        scanf("%d", &n);
        printf("%d\n", insere_lista_final(li, n));
    }
    
    funcao(li, li_par);
    libera_lista(li);
    
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
            no->num = n;
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

void funcao(Lista *li, Lista *lista_2){
    
    for(Elem *aux=*li;aux!=NULL;aux = aux->prox){
        if((aux->num) % 2 == 0){
            
            Elem *no_2;
            
            no_2 = (Elem *)malloc(sizeof(Elem));
            no_2->num = aux->num;
            no_2->prox = NULL;
            
            if((*lista_2) == NULL){
                *lista_2 = no_2;
            }else{
                Elem *aux_2;
                aux_2 = *lista_2;
                
                while(aux_2->prox != NULL){
                    aux_2 = aux_2->prox;
                }
                
                aux_2->prox = no_2;
            }
        }
    }
    
    lista_imprime(lista_2);
}

void lista_imprime(Lista *lista){
  Elem *no = *lista;
  while (no != NULL) {
    printf("%d ", no->num);
    no = no->prox;
  }
  printf("\n");
}

void libera_lista(Lista *li){
    if((*li) != NULL){
        Elem *no;
        
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        
        free(li);
    }
}