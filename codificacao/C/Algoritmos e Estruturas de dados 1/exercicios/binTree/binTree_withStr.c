#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct NoArvore NoArvore;

struct NoArvore {
    char *chave;
    NoArvore *esq, *dir;
};

typedef struct LinkedList LinkedList;

struct LinkedList {
    char *val;
    LinkedList *next;
};

LinkedList * create_node(char *x);
LinkedList * concat(LinkedList* l1, LinkedList* l2);
NoArvore* new_node(char *value);
NoArvore* insert_node(NoArvore* root, char *value);
NoArvore* remover(NoArvore* raiz, char* chave);
NoArvore* buscar(NoArvore* raiz, char* chave);
LinkedList* in_order(NoArvore* root);
char* strdup(const char* str);

int main(void) {

    NoArvore* root=NULL;
    LinkedList* list=NULL;
    LinkedList* walker=NULL;
    char opc, value[100];
    int count=0;

    do{
        scanf(" %c", &opc);

        if(opc == 'i') {

            scanf(" %s", value);

            if(count == 0) {
                root = insert_node(root, value);
            } else {
                insert_node(root, value);
            }
        }

        else if(opc == 'r') {

            scanf(" %s", value);

            remover(root, value);
        } else if(opc == 'b') {
            scanf(" %s", value);

            buscar(root, value);
        }

        count++;
    }while(opc != 's');

    list = in_order(root);
    walker = list;

    while(walker != NULL) {
        printf("%s ", walker->val);
        walker = walker->next;
    }printf("\n");

    return 0;
}

LinkedList * create_node(char *x) {
    LinkedList * node = (LinkedList *)malloc(sizeof(LinkedList));
    node->val = x;
    node->next = NULL;
    return node;
}

LinkedList * concat(LinkedList* l1, LinkedList* l2) {
    if (l1 == NULL) return l2;
    LinkedList * walker = l1;
    while (walker->next != NULL) walker = walker->next;
    walker->next = l2;
    return l1;
}

NoArvore* new_node(char *value) {
    NoArvore* root = (NoArvore*) malloc(sizeof(NoArvore));
    root->chave = strdup(value);
    root->esq = NULL;
    root->dir = NULL;
    return root;
}

NoArvore* insert_node(NoArvore* root, char *value) {
    if (root == NULL) {
        return new_node(value);
    }

    int cmp = strcmp(value, root->chave);

    if (cmp < 0) {
        root->esq = insert_node(root->esq, value);
    } else if (cmp > 0) {
        root->dir = insert_node(root->dir, value);
    }
    return root;
}

NoArvore* remover(NoArvore* raiz, char* chave) {
    if(raiz == NULL) {
        return NULL;
    }

    int cmp = strcmp(chave, raiz->chave);

    if(cmp < 0) {
        raiz->esq = remover(raiz->esq, chave);
    } else if(cmp > 0) {
        raiz->dir = remover(raiz->dir, chave);
    } else {
        if(raiz->esq == NULL) {
            NoArvore* temp = raiz->dir;
            free(raiz);
            return temp;
        } else if(raiz->dir == NULL) {
            NoArvore* temp = raiz->esq;
            free(raiz);
            return temp;
        }

        NoArvore* temp = raiz->dir;
        while(temp->esq != NULL) {
            temp = temp->esq;
        }

        raiz->chave = strdup(temp->chave);
        raiz->dir = remover(raiz->dir, temp->chave);
    }

    return raiz;
}

NoArvore* buscar(NoArvore* raiz, char* chave) {
    if(raiz == NULL || strcmp(raiz->chave, chave) == 0) {
        return raiz;
    }

    if(strcmp(chave, raiz->chave) < 0) {
        return buscar(raiz->esq, chave);
    }

    return buscar(raiz->dir, chave);
}

LinkedList* in_order(NoArvore* root) {
    if (root == NULL) return NULL;
    LinkedList* list = in_order(root->esq);
    list = concat(list, create_node(root->chave));
    list = concat(list, in_order(root->dir));
    return list;
}

char* strdup(const char* str) {
    char* dup = malloc(strlen(str) + 1);
    if (dup) {
        strcpy(dup, str);
    }
    return dup;
}
