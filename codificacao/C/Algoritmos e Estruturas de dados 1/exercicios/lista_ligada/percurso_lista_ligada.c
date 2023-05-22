#include <stdio.h>
#include <stdlib.h>

struct LinkedNode {
    int data;
    struct LinkedNode *next;
};

typedef struct LinkedNode Elem;
typedef struct LinkedNode *List;


List* create_list();
int insere_lista_final(List *lista, int n);
void contar(List *inicio, int *qtd, int *soma);
void imprimir1(List *inicio);
void imprimir2(List *inicio);


int main(void) {

    int size=6, sum=0, value=0;
    List *li;

    li = create_list();

    for(int i=0; i<size; i++) {
        scanf("%d", &value);
        printf("%d\n", insere_lista_final(li, value));
    }
    
    size = 0;
    
    contar(li, &size, &sum);
    
    printf("%d\n", size);
    printf("%d\n", sum);
    
    imprimir1(li);
    imprimir2(li);


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



void contar(List *inicio, int *qtd, int *soma) {
    
    int count_size=0, count_sum=0;
    Elem *aux;
    
    aux = *inicio;
    
    while(aux != NULL) {
        count_sum += aux->data;
        count_size++;
        aux = aux->next;
    }
    
        
    free(aux);
    
    *qtd = count_size;
    *soma = count_sum;
}


void imprimir1(List *inicio) {

    Elem *aux;
    
    aux = *inicio;
    
    while(aux != NULL) {
        
        printf("%d ", aux->data);
        
        aux = aux->next;
    }
    
    printf("\n");
}

void imprimir2(List *inicio) {

    Elem *aux, *aux2=NULL;
    
    aux = *inicio;
    
    while(aux->next != NULL) {
        aux2 = aux;
        aux = aux->next;
    }
    
    do {
        
        printf("%d ", aux->data);
        
        aux = *inicio;
        
        if(aux2 == *inicio) {
            printf("%d ", aux->data);
            printf("\n");
            break;
        }
        
        while(aux->next != aux2) {
            aux = aux->next;
        }
        
        printf("%d ", aux2->data);
        
        aux2 = *inicio;
        
        if(aux == *inicio) {
            printf("%d ", aux2->data);
            printf("\n");
            break;
        }
        
        while(aux2->next != aux) {
            aux2 = aux2->next;
        }
        
        
        
    }while(aux != *inicio || aux2 != *inicio);
}
