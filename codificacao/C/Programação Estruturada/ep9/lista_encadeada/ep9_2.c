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
void remover(Lista *li, int N);
void lista_imprime(Lista *lista);
void lista_free(Lista *lista);

int main(void){
    int i, n;
    Lista *li;
    
    li = cria_lista();
    
    for(i=0;i<5;i++){
        scanf("%d", &n);
        printf("%d\n", insere_lista_final(li, n));
    }
    
    scanf("%d", &n);
    
    remover(li, n);
    lista_free(li);
    
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
                printf("pl");
                return 1;
            }else{
                Elem *aux;
                aux = *li;
                
                while(aux->prox != NULL){
                    aux = aux->prox;
                }
                
                aux->prox = no;
                printf("ol");
                return 1;
            }
        }
    }
}

void remover(Lista *li, int N){
    
    for(int i=0;i<N;i++){
        Elem *ant, *no;
        
        no = *li;
        
        while(no->prox != NULL){
            ant = no;
            no = no->prox;
        }
        
        if(no == (*li)){
            *li = no->prox;
            
            free(no);
        }else{
            ant->prox = no->prox;
            
            free(no);
        }
    }
    lista_imprime(li);
}

void lista_imprime(Lista *lista){
  Elem *no = *lista;
  while (no != NULL) {
    printf("%d ", no->num);
    no = no->prox;
  }
  printf("\n");
}

void lista_free(Lista *lista){
  if (lista == NULL) exit(1);
  while ((*lista) != NULL) {
    Elem *no = *lista;
    *lista = (*lista)->prox;
    free(no);
  }
  free(lista);
}