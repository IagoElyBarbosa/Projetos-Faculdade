#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;

struct fila{
  struct elemento *ini;
  struct elemento *fim;
  int qtd;
};

typedef struct fila Fila;

Fila* cria_fila();
int insere_fila(Fila *fi, int n);
void imprime_fila(Fila *fi);
int remove_fila(Fila *fi);
void libera_fila(Fila *fi);

int main(void){
    int size, n;
    Fila *fi, *fi2;
    
    fi = cria_fila();
    fi2 = cria_fila();
    
    scanf("%d", &size);
    
    for(int i=0;i<size;i++){
        scanf("%d", &n);
        printf("%d\n", insere_fila(fi, n));
    }
    
    for(int i=0;i<5;i++){
        insere_fila(fi2, remove_fila(fi));
    }
    
    imprime_fila(fi);
    imprime_fila(fi2);
    
    libera_fila(fi);
    libera_fila(fi2);
    
    return 0;
}

Fila* cria_fila(){
    Fila *fi=NULL;
    
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
            }else{
                fi->fim->prox = no;
            }
            
            fi->fim = no;
            fi->qtd++;
            return 1;
        }
    }
}

void imprime_fila(Fila *fi){
    Elem *aux;
    aux = fi->ini;
    
    while(aux != NULL){
        printf("%d ", aux->num);
        aux = aux->prox;
    }printf("\n");
}

int remove_fila(Fila *fi){
    int n;
    Elem *no;
    no = fi->ini;
    fi->ini = fi->ini->prox;
    
    n = no->num;
    free(no);
    
    if(fi->ini == NULL){
        fi->fim = NULL;
    }
    
    fi->qtd--;
    return n;
}

void libera_fila(Fila *fi){
    Elem *aux=NULL;
    while(aux != NULL){
        aux = fi->ini;
        fi->ini = fi->ini->prox;
        free(aux);
    }
    
    free(fi);
}