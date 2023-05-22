#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *Lista;

Lista* cria_lista();
int insere_lista_final(Lista *list, int n);
void funcao(Lista *li, int pos, Lista *sublista_1, Lista *sublista_2);
void lista_imprime(Lista *lista);
void libera_lista(Lista *li);

int main(void){
    int i, n;
    Lista *main_li, *sublist_1, *sublist_2;
    
    main_li = cria_lista();
    sublist_1 = cria_lista();
    sublist_2 = cria_lista();
    
    for(i=0;i<5;i++){
        scanf("%d", &n);
        printf("%d\n", insere_lista_final(main_li, n));
    }
    
    scanf("%d", &n);
    
    funcao(main_li, n, sublist_1, sublist_2);
    
    libera_lista(sublist_1);
    libera_lista(main_li);
    libera_lista(sublist_2);
    
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

int insere_lista_final(Lista *list, int n){
    if(list == NULL){
        return 0;
    }else{
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));
        
        if(no == NULL){
            return 0;
        }else{
            no->num = n;
            no->prox = NULL;
            
            if((*list) == NULL){
                (*list) = no;
                return 1;
            }else{
                Elem *aux;
                aux = *list;
                
                while(aux->prox != NULL){
                    aux = aux->prox;
                }
                
                aux->prox = no;
                
                return 1;
            }
        }
    }
}

void funcao(Lista *li, int pos, Lista *sublista_1, Lista *sublista_2){
    int i=0;
    
    for(Elem *aux=*li;aux!=NULL;aux = aux->prox){
        if(i < pos){
            
            Elem *nosub_1;
            
            nosub_1 = (Elem *)malloc(sizeof(Elem));
            nosub_1->num = aux->num;
            nosub_1->prox = NULL;
            
            if((*sublista_1) == NULL){
                *sublista_1 = nosub_1;
            }else{
                Elem *auxsub_1;
                auxsub_1 = *sublista_1;
                
                while(auxsub_1->prox != NULL){
                    auxsub_1 = auxsub_1->prox;
                }
                auxsub_1->prox = nosub_1;
            }
        }else{
            
            Elem *nosub_2;
            
            nosub_2 = (Elem *)malloc(sizeof(Elem));
            nosub_2->num = aux->num;
            nosub_2->prox = NULL;
            
            if((*sublista_2) == NULL){
                *sublista_2 = nosub_2;
            }else{
                Elem *auxsub_2;
                auxsub_2 = *sublista_2;
                
                while(auxsub_2->prox != NULL){
                    auxsub_2 = auxsub_2->prox;
                }
                auxsub_2->prox = nosub_2;
            }
        }
        
        i++;
    }
    
    lista_imprime(sublista_1);
    lista_imprime(sublista_2);
    
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