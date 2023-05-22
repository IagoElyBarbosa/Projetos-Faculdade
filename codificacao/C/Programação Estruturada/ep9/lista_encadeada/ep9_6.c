#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *Lista;
void imprime_lista(Lista *li);


Lista* cria_lista();
int insere_lista_final(Lista *li, int n);
void funcao(Lista *li, Lista *lista_2);
void libera_lista(Lista *li);

int main(void){
    int i, n;
    Lista *li, *li2;
    
    li = cria_lista();
    li2 = cria_lista();
    
    for(i=0;i<5;i++){
        scanf("%d", &n);
        printf("%d\n", insere_lista_final(li, n));
    }
    
    funcao(li, li2);
    
    libera_lista(li);
    libera_lista(li2);
    
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
    int vet[5], i=0;
    
    for(Elem *aux=*li;aux!=NULL;aux=aux->prox){
        vet[i] = aux->num; 
        i++;
    }
    
    for(i=4;i>=0;i--){
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));
        no->num = vet[i];
        no->prox = NULL;
        
        if((*lista_2) == NULL){
            *lista_2 = no;
        }else{
            Elem *aux2;
            aux2 = *lista_2;
            
            while(aux2->prox != NULL){
                aux2 = aux2->prox;
            }
            
            aux2->prox = no;
        }
    }
    
    imprime_lista(lista_2);
}

void imprime_lista(Lista *li){
    Elem *no;
    no = *li;
    
    while(no != NULL){
        printf("%d ", no->num);
        no = no->prox;
    }
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