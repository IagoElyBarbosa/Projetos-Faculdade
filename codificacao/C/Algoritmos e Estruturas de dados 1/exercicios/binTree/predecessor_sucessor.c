#include <stdio.h>
#include <stdlib.h>

typedef struct NoArvore NoArvore;

struct NoArvore {
    int chave;
    NoArvore *esq, *dir;
};

typedef struct LinkedList {
    int val;
    struct LinkedList *next;
} LinkedList;

NoArvore* new_node(int value);
NoArvore* insert_node(NoArvore* root, int value);
int sucessor(NoArvore *raiz, int chave);
int antecessor(NoArvore *raiz, int chave);
LinkedList * create_node(int x);
LinkedList * concat(LinkedList* l1, LinkedList* l2);
LinkedList* pre_order(NoArvore* root);
LinkedList* in_order(NoArvore* root);
void free_list(LinkedList* list);
void free_tree(NoArvore* root);

int main(void) {

    NoArvore *root = NULL;
    LinkedList *list = NULL;
    LinkedList *walker = NULL;

    char opc;
    int count=0, value=0;

    do{

        scanf("%c", &opc);

        if(opc == 'I') {

            scanf("%d", &value);

            if(count == 0) {
                root = insert_node(root, value);
            } else {
                insert_node(root, value);
            }
        } else if(opc == 'S') {

            int key = 0;

            scanf("%d", &key);

            printf("%d\n", sucessor(root, key));
        } else if(opc == 'A') {

            int key = 0;

            scanf("%d", &key);
            printf("%d\n", antecessor((root), key));
        }

        if(count == 0) {
            count++;
        }

    }while(opc != 'E');

    free_tree(root);

    return 0;
}

LinkedList * create_node(int x) {
    LinkedList * node = (LinkedList *) malloc(sizeof(LinkedList));
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

NoArvore* new_node(int value) {
    NoArvore* root = (NoArvore *)malloc(sizeof(NoArvore));

    root->chave = value;
    root->esq = NULL;
    root->dir = NULL;
    return root;
}

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

LinkedList* in_order(NoArvore* root) {
    if (root == NULL) return NULL;
    LinkedList* list = in_order(root->esq);
    list = concat(list, create_node(root->chave));
    list = concat(list, in_order(root->dir));
    return list;
}

void free_list(LinkedList* list) {
    if (list == NULL) return;
    free_list(list->next);
    free(list);
}

void free_tree(NoArvore* root) {
    if (root == NULL) return;
    free_tree(root->esq);
    free_tree(root->dir);
    free(root);
}

int sucessor(NoArvore *raiz, int chave) {

    int aux=0;

    LinkedList *list=NULL, *walker=NULL;

    list = in_order(raiz);
    walker = list;

    while(walker->next != NULL && walker->val != chave) {
        walker = walker->next;
    }

    if(walker->next == NULL) {
        free_list(list);
        return -1;
    }

    walker = walker->next;

    aux = walker->val;

    free_list(list);

    return aux;
}

int antecessor(NoArvore *raiz, int chave) {

    int aux=0;

    LinkedList *list=NULL, *prev=NULL, *cur=NULL;

    list = in_order(raiz);
    prev = list;
    cur = prev->next;

    while(cur != NULL && cur->val != chave) {
        prev = cur;
        cur = cur->next;
    }

    if(cur == NULL) {
        free_list(list);
        return -1;
    }

    aux = prev->val;

    free_list(list);

    return aux;
}

