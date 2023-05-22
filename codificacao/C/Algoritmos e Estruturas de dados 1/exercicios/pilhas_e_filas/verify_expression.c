#include <stdio.h>
#include <stdlib.h>

struct LinkedNode {
   char data;
   struct LinkedNode *next;
};

typedef struct LinkedNode LinkedNode;

struct FilaDinamica {
   LinkedNode *inicio, *fim;
};

typedef struct FilaDinamica FilaDinamica;

FilaDinamica *criar_fila();
int enfileirar(FilaDinamica *fila, char valor);
int desenfileirar(FilaDinamica *fila, char *valor);
void liberar_fila(FilaDinamica *fila);
void print_dynamicQueue(FilaDinamica *fila);

int main(void) {

    int iAux=0;
    char expres[100], aux[30];

    scanf("%s", expres);

    for(int i=0;expres[i] != '\0'; i++) {
        if(expres[i] == '(' || expres[i] == ')' || expres[i] == '[' || expres[i] == ']' || expres[i] == '{' || expres[i] == '}'){
            aux[iAux] = expres[i];
            iAux++;
        }
    }
    
    FilaDinamica *queue;
    int count=0;
    
    queue = criar_fila();
    
    for(int i=0; i<iAux; i++) {
        if(aux[i] == '(' || aux[i] == '{' || aux[i] == '[') {
            enfileirar(queue, aux[i]);
        } else if(aux[i] == ')') {
            LinkedNode *cur;
            cur = queue->inicio;
            
            if(cur->data != '(') {
                count++;
            }
            
            desenfileirar(queue, &aux[i]);
        } else if(aux[i] == ']') {
            LinkedNode *cur;
            cur = queue->inicio;
            
            if(cur->data != '[') {
                count++;
            }
            
            desenfileirar(queue, &aux[i]);
        } else if(aux[i] == '}') {
            LinkedNode *cur;
            cur = queue->inicio;
            
            if(cur->data != '{') {
                count++;
            }
            
            desenfileirar(queue, &aux[i]);
        }
    }
    
    if(count > 0) {
        printf("NAO");
    } else {
        printf("SIM");
    }
    
    return 0;
}

FilaDinamica *criar_fila() {
    FilaDinamica *fx = (FilaDinamica *)malloc(sizeof(FilaDinamica));

    if(fx != NULL) {
        fx->inicio = NULL;
        fx->fim = NULL;
    }
    
    return fx;
}

int enfileirar(FilaDinamica *fila, char valor){
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

int desenfileirar(FilaDinamica *fila, char *valor){
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
        printf("%c ", aux->data);
        aux = aux->next;
    }printf("\n");
    
}