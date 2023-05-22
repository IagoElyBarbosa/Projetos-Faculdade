#include <stdio.h>
#include <stdlib.h>

struct LinkedNode {
   int data;
   struct LinkedNode *next;
};

typedef struct LinkedNode LinkedNode;

int verificar_ordenacao(LinkedNode *inicio);

int main(void) {
    
    LinkedNode *inicio = (LinkedNode *)malloc(sizeof(LinkedNode));
    
    if (inicio != NULL) {
        inicio->data = 20;
        inicio->next = NULL;
    }
    
    verificar_ordenacao(inicio);
    
    return 0;
}

int verificar_ordenacao(LinkedNode *inicio) {
    
    LinkedNode *no = (LinkedNode *)malloc(sizeof(LinkedNode));
    
    no->data = 30;
    no->next = NULL;
    
    inicio->next = no;
    
    
    LinkedNode *elem = inicio;
    
    while (elem != NULL){
        printf("%d ", elem->data);
        elem = elem->next;
    }
    
    
    return 1;
}