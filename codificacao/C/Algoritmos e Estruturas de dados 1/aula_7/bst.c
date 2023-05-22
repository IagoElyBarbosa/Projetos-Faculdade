#include "bst.h"
#include <stdlib.h>

typedef int item_t;

typedef struct bst_node_t {
    item_t value;
    struct bst_node_t *left;
    struct bst_node_t *right;
} bst_node_t;

bst_node_t* bst_create(item_t value) {

    bst_node_t* node = malloc(sizeof(bst_node_t));

    node->left = NULL;
    node->right = NULL;
    node->value = value;

    return node;
}

bst_node_t* bst_insert(bst_node_t* root, item_t value) {
    if(root == NULL) {
        return bst_create(value);
    } else if(value < root->value) {
        root->left = bst_insert(root->left, value);
    } else if(value > root->value) {
        root->rigth = bst_insert(root->right, value);
    }

    return root;
}

// ordenacao em ordem dos elementos - inorder

void bst_print_inorder(bst_node_t* root) {
    if(root != NULL) {
        bst_print_inorder(root->left);
        printf("%d ", root->value);
        bst_print_inorder(root->right);
    }
}

// ordenacao topologica da arvore - preorder

void bst_print_preorder(bst_node_t* root) {
    if(root != NULL) {
        printf("%d ", root->value);
        bst_print_preorder(root->left);
        bst_print_preorder(root->right);
    }
}

// parcing de expressoes aritmeticas - arvores de expressoes - arvore abstrata

void bst_print_posorder(bst_node_t* root) {
    if(root != NULL) {
        bst_print_posorder(root->left);
        bst_print_posorder(root->right);
        printf("%d ", root->value);
    }
}

void bst_destroy(bst_node_t* root) {
    if(root != NULL) {
        bst_destroy(root->left);
        bst_destroy(root->right);
        free(root);
    }
}

// achando o sucessor para o caso do no a ser apagado ter 2 filhos

bst_node_t* bst_find_sucessor(bst_node_t* root) {
    if(root->left == NULL) {
        return root;
    }

    else bst_find_sucessor(root->left);
}

/*

---REMOCAO NA ARVORE BINARIA---

1 - buscar o valor
2 - remover o valor caso encontrado

* caso 1: no-foco com zero filhos (so remover)
* caso 2: no-foco com um filho -> substitua o valor do pai pelo valor do filho -> chamar a recursao para deletar o filho
* caso 3: no-foco cmo dois filhos -> busco o sucessor (ou antecessor) -> substituo o valor do pai pelo valor do sucessor(ou antecessor) -> removo o  valor do sucessor(ou antecessor) na sub da esq/dir

*/

bst_node_t* bst_remove(bst_node_t* root, item_t value) {
    if(root == NULL) {
        return NULL;
    }

    if(value < root->value) {
        root->left = bst_remove(root->left, value);
    } else if(value > root->value) {
        root->right = bst_remove(root->right, value);
    } else {
        if(root->right == NULL) {
            bst_node_t* child = root->left;
            free(root);
            return child;

        } else if(root->left == NULL) {
            bst_node-t* child = root->right;
            free(root);
            return child;

        }

        // caso em que o no a ser apagado possui 2 filhos

        bst_node_t* sucessor = bst_find_sucessor(root->right);

        root->value = sucessor->value;

        root->right = bst_remove(root->right, sucessor->value);
    }

    return root;
}

// exercicio: determinar a altura da arvore; realizar uma busca na arvore; contar quantos elementos a arvore possui