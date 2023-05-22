#include <stdio.h>
#include <stdlib.h>

struct LinkedNode {
   int data;
   struct LinkedNode *next;
};

typedef struct LinkedNode LinkedNode;

struct FilaDinamica {
   LinkedNode *inicio, *fim;
};

typedef struct FilaDinamica FilaDinamica;


FilaDinamica *criar_fila();
int enfileirar(FilaDinamica *fila, int valor);
int desenfileirar(FilaDinamica *fila, int *valor);
void liberar_fila(FilaDinamica *fila);
void print_dynamicQueue(FilaDinamica *fila);

int main(void) {
    
    FilaDinamica *fi;
    
    fi = criar_fila();
    
    for(int i=1; i<=5; i++) {
        printf("%d\n", enfileirar(fi, i));
    }
    
    print_dynamicQueue(fi);;
    
    return 0;
}

FilaDinamica *criar_fila() {
    FilaDinamica *fx = (FilaDinamica *)malloc(sizeof(FilaDinamica));
    
    if(fx != NULL) {
        fx->inicio = NULL;
        fx->fim = NULL;
    }return fx;
}

int enfileirar(FilaDinamica *fila, int valor){
    if(fila == NULL) {
        return 0;
    } else {
        LinkedNode *no = (LinkedNode *)malloc(sizeof(LinkedNode));
        no->data = valor;
        no->next = NULL;
        
        if(fila->fim == NULL) {
            fila->inicio = no;
            fila->fim = no;
            return 1;
        } else {
            fila->fim->next = no;
        }
        
        fila->fim = no;
        
        return 1;
    }
}

int desenfileirar(FilaDinamica *fila, int *valor){
    if(fila->fim == NULL || fila->inicio == NULL) {
        return 0;
    } else {
        LinkedNode *no = fila->inicio;
        
        fila->inicio = fila->inicio->next;
        free(no);
        
        if(fila->inicio == NULL) {
            fila->fim = NULL;
        }
        
        return 1;
    }
}

void liberar_fila(FilaDinamica *fila) {
    LinkedNode *aux = NULL;
    
    if(fila == NULL || fila->inicio == NULL) {
        free(fila);
    } else {
        while(fila->inicio != NULL) {
            aux = fila->inicio;
            fila->inicio = fila->inicio->next;
            
            free(aux);
        }free(fila);   
    }
}

void print_dynamicQueue(FilaDinamica *fila) {
    
    LinkedNode *aux = fila->inicio;
    
    while(aux != NULL) {
        printf("%d ", aux->data);
        aux = aux->next;
    }printf("\n");
    
}