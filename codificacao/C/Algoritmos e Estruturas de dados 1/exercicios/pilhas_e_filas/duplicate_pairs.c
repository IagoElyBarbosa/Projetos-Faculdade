#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};

typedef struct DLinkedNode DLinkedNode;
struct DLinkedNode {
   int data;
   DLinkedNode *next, *prev;
};

//void duplicar_pares1(LinkedNode *inicio);
void duplicar_pares2(DLinkedNode *inicio);
int insere_lista_1(LinkedNode* list, int value);
int insere_lista_2(DLinkedNode* list, int value);
void print_list(DLinkedNode *list);

int main(void) {
    
    int type=0, size=0, value=0;
    
    scanf("%d", &type);
    scanf("%d", &size);
    scanf("%d", &value);
    
    /*
    LinkedNode *list = (LinkedNode *)malloc(sizeof(LinkedNode));
    
    list->data = value;
    list->next = NULL;
    
    for(int i=0; i<(size - 1); i++) {
        scanf("%d", &value);
        insere_lista(list, value);
    }
    */
    DLinkedNode *list = (DLinkedNode *)malloc(sizeof(DLinkedNode));
    list->data = value;
    list->next = NULL;
    list->prev = NULL;
    
    for(int i=0; i<(size - 1); i++) {
        scanf("%d", &value);
        insere_lista_2(list, value);
    }
    
    print_list(list);
    
    if(type == 1) {
        //duplicar_pares1(list);
    } else {
        duplicar_pares2(list);
    }
    
    print_list(list);
    
    return 0;
}
/*
void duplicar_pares1(LinkedNode *inicio) {
    LinkedNode *cur = inicio, *prev;
    
    if(inicio->next == NULL) {
        if(inicio->data % 2 == 0) {
            LinkedNode *no = (LinkedNode *)malloc(sizeof(LinkedNode));
            no->data = inicio->data;
            inicio->next = no;   
        }
    } else {
        prev = cur;
        cur = cur->next;
        
        while(cur != NULL) {
            
            if(prev->data % 2 == 0) {
                LinkedNode *no = (LinkedNode *)malloc(sizeof(LinkedNode));
                
                no->data = prev->data;
                no->next = cur;
                prev->next = no;
            }
            prev = cur;
            cur = cur->next;
        }
        
        if(prev->data % 2 == 0) {
            LinkedNode *no = (LinkedNode *) malloc(sizeof(LinkedNode));
            
            no->data = prev->data;
            no->next = NULL;
            prev->next = no;
        }
    }
}

*/
void duplicar_pares2(DLinkedNode *inicio) {
    if(inicio->next == NULL) {
        
        if(inicio->data % 2 == 0) {
            DLinkedNode *no = (DLinkedNode *)malloc(sizeof(DLinkedNode));
        
            no->data = inicio->data;
            no->prev = inicio;
            no->next = NULL;
            
            inicio->next = no;    
        }
    } else {
        DLinkedNode *cur=inicio, *ant;
        
        ant = cur;
        cur = cur->next;
        
        while(cur != NULL) {
            if(ant->data % 2 == 0) {
                DLinkedNode *no = (DLinkedNode *)malloc(sizeof(DLinkedNode));
                
                no->data = ant->data;
                no->prev = ant;
                no->next = cur;
                
                ant->next = no;
                cur->prev = no;
            }
            
            ant = cur;
            cur = cur->next;
        }
        
        if(ant->data % 2 == 0) {
            DLinkedNode *no = (DLinkedNode *)malloc(sizeof(DLinkedNode));
            
            no->data = ant->data;
            no->prev = ant;
            no->next = NULL;
            
            ant->next = no;
        }
    }
}


// funcoes base

int insere_lista_1(LinkedNode* list, int value) {
    
    if(list == NULL) {
        return 0;
    } else {
        LinkedNode *no = (LinkedNode *)malloc(sizeof(LinkedNode));
    
        no->data = value;
        no->next = NULL;
        
        LinkedNode *aux = list;
        
        while(aux->next != NULL) {
            aux = aux->next;
        }
        
        aux->next = no;
        
        return 1;
    }
}

int insere_lista_2(DLinkedNode* list, int value) {
    
    if(list == NULL) {
        return 0;
    } else {
        DLinkedNode *no = (DLinkedNode *)malloc(sizeof(DLinkedNode));
    
        no->data = value;
        no->prev = list;
        no->next = NULL;
        
        DLinkedNode *aux = list;
        
        while(aux->next != NULL) {
            aux = aux->next;
        }
        
        aux->next = no;
        
        return 1;
    }
}

void print_list(DLinkedNode *list) {
    DLinkedNode *aux = list;
    
    while(aux != NULL) {
        printf("%d ", aux->data);
        aux = aux->next;
    }printf("\n");
}