#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *Lista;

Lista* cria_lista();
int insere_lista_final(Lista *lista, int n);
void troca(Lista *li, int pos1, int pos2);
void lista_imprime(Lista *lista);

int main(void){
    int i, n, p1, p2;
    Lista *li;
    
    li = cria_lista();
    
    for(i=0;i<5;i++){
        scanf("%d", &n);
        printf("%d\n", insere_lista_final(li, n));
    }
    
    scanf("%d", &p1);
    scanf("%d", &p2);
    
    troca(li, p1, p2);
}

Lista* cria_lista(){
    Lista *li;
    
    li = (Lista *)malloc(sizeof(Lista));
    
    if(li != NULL){
        (*li) = NULL;
    }
    
    return li;
}

int insere_lista_final(Lista *lista, int n){
    if(lista == NULL){
        return 0;
    }else{
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));
        
        if(no == NULL){
            return 0;
        }else{
            no->num = n;
            no->prox = NULL;
            
            if((*lista) == NULL){
                *lista = no;
                return 1;
            }else{
                Elem *aux;
                aux = *lista;
                
                while(aux->prox != NULL){
                    aux = aux->prox;
                }
                
                aux->prox = no;
                return 1;
            }
        }
    }
}

void troca(Lista *li, int pos1, int pos2){
    int np1=0, np2=0, ip1=0, ip2=0, i;
    Elem *aux, *aux2;
    aux = *li;
    aux2 = *li;
    
    for(i=0;i<pos1;i++){
        np1 = aux->num;
        ip1 = i;
        aux = aux->prox;
    }
    
    for(i=0;i<pos2;i++){
        np2 = aux2->num;
        ip2 = i;
        aux2 = aux2->prox;
    }
    
    i = 0;
    
    for(aux=*li;aux!=NULL;aux=aux->prox){
        if(i == ip1){
            aux->num = np2;
        }else if(i == ip2){
            aux->num = np1;
        }
        i++;
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