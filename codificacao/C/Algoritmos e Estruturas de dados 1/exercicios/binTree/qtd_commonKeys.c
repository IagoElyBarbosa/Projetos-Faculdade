#include <stdio.h>
#include <stdlib.h>

typedef struct NoArvore NoArvore;

struct NoArvore {
    int chave;
    NoArvore *esq, *dir;
};

typedef struct LinkedList LinkedList;

struct LinkedList {
    int val;
    LinkedList *next;
};

LinkedList * create_node(int x);
LinkedList * concat(LinkedList* l1, LinkedList* l2);
NoArvore* new_node(int value);
NoArvore* insert_node(NoArvore* root, int value);
LinkedList* in_order(NoArvore* root);

int main(void) {

    NoArvore *root_1=NULL, *root_2=NULL;
    LinkedList *list_1=NULL, *list_2=NULL, *walker=NULL;
    char opc;
    int value=0, count=0, size_1=0, size_2=0, qtd_commonKeys=0;

    do{
        scanf("%c", &opc);
        if(opc == 'i') {

            scanf("%d", &value);

            if(count == 0) {
                root_1 = insert_node(root_1, value);
            } else {
                insert_node(root_1, value);
            }
        }
        if(count == 0) {
            count++;
        }
    }while(opc != 's');

    getchar();
    count = 0;

    do{
        scanf("%c", &opc);
        if(opc == 'i') {

            scanf("%d", &value);

            if(count == 0) {
                root_2 = insert_node(root_2, value);
            } else {
                insert_node(root_2, value);
            }
        }
        if(count == 0) {
            count++;
        }
    }while(opc != 's');

    list_1 = in_order(root_1);
    walker = list_1;

    while(walker->next != NULL) {
        size_1++;
        walker = walker->next;
    }size_1++;

    list_2 = in_order(root_2);
    walker->next = list_2;

    walker = list_2;

    while(walker != NULL) {
        size_2++;
        walker = walker->next;
    }

    int vetAux[size_1+size_2];
    walker = list_1;

    for(int i=0; i<(size_1+size_2); i++) {
        vetAux[i] = walker->val;
        walker = walker->next;
    }

    for(int i=0; i<size_1; i++) {
        for(int j=size_1; j<(size_1+size_2); j++) {
            if(vetAux[i] == vetAux[j]) {
                qtd_commonKeys++;
                break;
            }
        }
    }


    return 0;
}

//cria no lista
LinkedList * create_node(int x) {
    LinkedList * node = (LinkedList *) malloc(sizeof(LinkedList));
    node->val = x;
    node->next = NULL;
    return node;
}

//concatena lista
LinkedList * concat(LinkedList* l1, LinkedList* l2) {
    if (l1 == NULL) return l2;
    LinkedList * walker = l1;
    while (walker->next != NULL) walker = walker->next;
    walker->next = l2;
    return l1;
}

//cria no arvore
NoArvore* new_node(int value) {
    NoArvore* root = (NoArvore *)malloc(sizeof(NoArvore));

    root->chave = value;
    root->esq = NULL;
    root->dir = NULL;
    return root;
}

//insere no arvore
NoArvore* insert_node(NoArvore* root, int value) {
    if(root == NULL) {
        return new_node(value);
    }
    if(value < root->chave) {
        root->esq = insert_node(root->esq, value);
    } else if (value > root->chave) {
        root->dir = insert_node(root->dir, value);
    }

    return root;
}

//cria lista a partir da arvore(em ordem)
LinkedList* in_order(NoArvore* root) {
    if (root == NULL) return NULL;
    LinkedList* list = in_order(root->esq);
    list = concat(list, create_node(root->chave));
    list = concat(list, in_order(root->dir));
    return list;
}
