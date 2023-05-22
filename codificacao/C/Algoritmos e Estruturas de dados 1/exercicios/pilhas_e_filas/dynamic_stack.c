#include <stdio.h>
#include <stdlib.h>

struct LinkedNode {
   int data;
   struct LinkedNode *next;
};

typedef struct LinkedNode LinkedNode;

struct PilhaDinamica {
   LinkedNode *topo;
};

typedef struct PilhaDinamica PilhaDinamica;

PilhaDinamica *criar_pilha();
int empilhar(PilhaDinamica *pilha, int valor);
int desempilhar(PilhaDinamica *pilha, int *valor);
void liberar_pilha(PilhaDinamica *pilha);
void print_dynamicStack(PilhaDinamica *pilha);

int main(void) {
    
    PilhaDinamica *pi;
    
    pi = criar_pilha();
    
    for(int i=1; i<6; i++) {
        empilhar(pi, i);
    }
    return 0;
}

PilhaDinamica *criar_pilha(){
    PilhaDinamica *px;
    
    px = (PilhaDinamica *)malloc(sizeof(PilhaDinamica));
    
    if(px != NULL) {
        px->topo = NULL;
    }
    
    return px;
}

int empilhar(PilhaDinamica *pilha, int valor) {
    
    if(pilha == NULL) {
        return 0;
    }else {
        LinkedNode *no = (LinkedNode *)malloc(sizeof(LinkedNode));
        
        if(no == NULL) {
            return 0;
        } else {
            no->data = valor;
            no->next = pilha->topo;
            pilha->topo = no;
            
            return 1;
        }
    }
}

int desempilhar(PilhaDinamica *pilha, int *valor) {
    
    if(pilha == NULL || pilha->topo == NULL) {
        return 0;
    } else {
        LinkedNode *aux = pilha->topo;
        pilha->topo = aux->next;
        
        *valor = aux->data;
        
        free(aux);
        
        return 1;
    }
}

void liberar_pilha(PilhaDinamica *pilha) {
    
     if(pilha == NULL || pilha->topo == NULL) {
        free(pilha);
    } else {

        LinkedNode *aux = NULL;
        
        while(pilha->topo != NULL) {
            aux = pilha->topo;
            pilha->topo = pilha->topo->next;
            
            free(aux);
        }
        
        free(pilha);;
    }
}

void print_dynamicStack(PilhaDinamica *pilha) {
    LinkedNode *aux = pilha->topo;
    
    while(aux != NULL) {
        
        printf("%d ", aux->data);
        aux = aux->next;
    }printf("\n");
}