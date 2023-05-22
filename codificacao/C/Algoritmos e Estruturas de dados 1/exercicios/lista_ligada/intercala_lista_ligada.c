#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode {
   int data;
   LinkedNode *next;
};

typedef struct LinkedNode Elem;
typedef struct LinkedNode *List;

List* create_list();
int insere_lista_final(List *lista, int n);
void print_linkedList(List *inicio);
List* intercalar_listas(List *inicio1, List *inicio2);

int main(void) {
    
    int size=6, value=0;
    List *l1, *l2;

    l1 = create_list();
    l2 = create_list();

    for(int i=0; i<size; i++) {
        scanf("%d", &value);
        printf("%d\n", insere_lista_final(l1, value));
    }
    
    for(int i=0; i<size; i++) {
        scanf("%d", &value);
        printf("%d\n", insere_lista_final(l2, value));
    }
    
    print_linkedList(l1);
    print_linkedList(l2);
    
    intercalar_listas(l1, l2);
    
    print_linkedList(l1);
    
    return 0;
}

List* create_list() {
    List *li;

    li = (List *)malloc(sizeof(List));

    if(li != NULL) {
        (*li) = NULL;
    }

    return li;
}

int insere_lista_final(List *lista, int n) {
    if(lista == NULL){
        return 0;
    }else{
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));

        if(no == NULL){
            return 0;
        }else{
            no->data = n;
            no->next = NULL;

            if((*lista) == NULL){
                *lista = no;
                return 1;
            }else{
                Elem *aux;
                aux = *lista;

                while(aux->next != NULL){
                    aux = aux->next;
                }

                aux->next = no;
                return 1;
            }
        }
    }
}

void print_linkedList(List *inicio) {

    Elem *aux;
    
    aux = *inicio;
    
    while(aux != NULL) {
        
        printf("%d ", aux->data);
        
        aux = aux->next;
    }
    
    printf("\n");
}

List* intercalar_listas(List *inicio1, List *inicio2) {
    
    if((*inicio1) == NULL) {
        return inicio2;
    }else if ((*inicio2) == NULL){
        return inicio1;
    }else {
        int size=0;
        Elem *aux = *inicio1;
        
        while(aux->next != NULL) {
            size++;
            aux = aux->next;
        }
        
        aux->next = *inicio2;
        
        while(aux != NULL) {
            size++;
            aux = aux->next;
        }
        
        int troca=0;
        
        Elem *aux2;
        
        aux = *inicio1;
        aux2 = *inicio1;
        
        aux2 = aux2->next;
        
        while(aux->next != NULL) {
            
            while(aux2 != NULL) {
                
                if(aux->data > aux2->data) {
                    troca = aux->data;
                    aux->data = aux2->data;
                    aux2->data = troca;
                }
                
                aux2 = aux2->next;
            }
            
            aux = aux->next;
            aux2 = aux->next;
        }
        
        return inicio1;
        
    }
}