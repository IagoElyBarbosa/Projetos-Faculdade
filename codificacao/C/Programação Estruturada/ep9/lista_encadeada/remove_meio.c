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
int insere_lista_inicio(Lista *li, int n);
void imprime_lista(Lista *li);
void libera_lista(Lista *li);
void remove_lista_meio(Lista *li, int n);

int main(void){
    int i, n;
    Lista *li;
    
    li = cria_lista();
    
    for(i=0;i<5;i++){
        scanf("%d", &n);
        printf("%d\n", insere_lista_final(li, n));
    }
    
    for(i=0;i<5;i++){
        scanf("%d", &n);
        printf("%d\n", insere_lista_inicio(li, n));
    }
    
    
    scanf("%d", &n);
    
    imprime_lista(li);
    remove_lista_meio(li, n);
    imprime_lista(li);
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

void remove_lista_meio(Lista *li, int n){
    Elem *ant, *no;
    no = *li;
    
    while(no != NULL && no->num != n){
        ant = no;
        no = no->prox;
    }
    
    if(no == *li){
        *li = no->prox;
    }else{
        ant->prox = no->prox;
    }
    free(no);
}