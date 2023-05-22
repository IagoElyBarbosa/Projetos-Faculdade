#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int item_t;

typedef struct avl_node_t {
    item_t ra;
    item_t nota;
    struct avl_node_t* left;
    struct avl_node_t* right;
    int height;
} avl_node_t;

int avl_height(avl_node_t* root);
void avl_destroy(avl_node_t* root);
avl_node_t* avl_create_node(item_t value, item_t nota);
int avl_balance_factor(avl_node_t* root);
void update_height(avl_node_t* root);
avl_node_t* avl_rotate_left(avl_node_t* root, int condition);
avl_node_t* avl_rotate_right(avl_node_t* root, int condition);
avl_node_t* avl_rebalance(avl_node_t* root);
avl_node_t* avl_insert(avl_node_t* root, item_t key, item_t nota);
void print_with_indent(avl_node_t* root, int indent);
void avl_print(avl_node_t* root);
void fill_spaces(int size);
void verify_condition(avl_node_t* root);

int main(void) {

    avl_node_t* root = NULL;
    char opt;
    int ra, nota;

    do{
        scanf(" %c", &opt);

        if(opt == 'i') {
            scanf("%d", &ra);
            scanf("%d", &nota);

            root = avl_insert(root, ra, nota);
        }
        //avl_print(root);
    }while(opt != 'p');

    return 0;
}

int maximum(int a, int b) {
    if(a > b) {
        return a;
    }
    return b;
}

int avl_height(avl_node_t* root) {
    if(root == NULL) {
        return 0;
    }

    return root->height;
}

void avl_destroy(avl_node_t* root) {
    if (root != NULL) {
        avl_destroy(root->left);
        avl_destroy(root->right);
        free(root);
    }
}

avl_node_t* avl_create_node(item_t key, item_t nota) {
    avl_node_t* node = (avl_node_t *)malloc(sizeof(avl_node_t));

    node->ra = key;
    node->nota = nota;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;

    return node;
}

/**
 * The bf factor:
 * - is positive if the tree is unbalanced to the left
 * - is negative if the tree is unbalanced to the right
*/

int avl_balance_factor(avl_node_t* root) {
    if (root == NULL) {
        return 0;
    }

    return avl_height(root->left) - avl_height(root->right);
}

void update_height(avl_node_t* root) {
    if (root != NULL) {
        root->height = 1 + maximum(avl_height(root->left), avl_height(root->right));
    }
}

avl_node_t* avl_rotate_left(avl_node_t* root, int condition) {
    int x, y, z;
    avl_node_t* pivot = root->right;
    if(condition == 1) {
        x = root->ra;
        y = pivot->ra;
        z = root->right->right->ra;
        printf("[x=%d y=%d z=%d]\n", x, y, z);
    }
    root->right = pivot->left;

    pivot->left = root;
    z = pivot->left->ra;

    update_height(root);
    update_height(pivot);

    return pivot;
}

avl_node_t* avl_rotate_right(avl_node_t* root, int condition) {
    int x, y, z;
    avl_node_t* pivot = root->left;
    if(condition == 1) {
        x = root->left->left->ra;
        y = pivot->ra;
        z = root->ra;
        printf("[x=%d y=%d z=%d]\n", x, y, z);
    }
    root->left = pivot->right;
    pivot->right = root;

    update_height(root);
    update_height(pivot);

    return pivot;
}

avl_node_t* avl_rebalance(avl_node_t* root) {
    if (root == NULL) {
        return root;
    }

    int bf = avl_balance_factor(root);
    int bf_r = avl_balance_factor(root->right);
    int bf_l = avl_balance_factor(root->left);

    if (bf >= -1 && bf <= 1) {
        printf("[Ja esta balanceado]\n");
        return root;
    } else{
        if (bf < -1 && bf_r <= 0) { // L
        printf("[No desbalanceado: %d]\n", root->ra);
        printf("[Rotacao: SE]\n");
        root = avl_rotate_left(root, 1);
    } else if (bf > 1 && bf_l >= 0) { // R
        printf("[No desbalanceado: %d]\n", root->ra);
        printf("[Rotacao: SD]\n");
        root = avl_rotate_right(root, 1);
    } else if (bf < -1 && bf_r > 0) { // RL
        printf("[No desbalanceado: %d]\n", root->ra);
        printf("[Rotacao: DE]\n");
        root->right = avl_rotate_right(root->right, 0);
        root = avl_rotate_left(root, 1);
    } else if (bf > 1 && bf_l < 0) { // LR
        printf("[No desbalanceado: %d]\n", root->ra);
        printf("[Rotacao: DD]\n");
        root->left = avl_rotate_left(root->left, 0);
        root = avl_rotate_right(root, 1);
        }
    }
    return root;
}

/*void verify_condition(avl_node_t* root) {
    int bf = avl_balance_factor(root);

    if(bf >= -1 && bf <= 1) {
        printf("[Ja esta balanceado]\n");
    }
}*/

avl_node_t* avl_insert(avl_node_t* root, item_t key, item_t nota) {
    if (root == NULL) {
        return avl_create_node(key, nota);
    }
    if (key < root->ra) {
        root->left = avl_insert(root->left, key, nota);
    }
    if (key > root->ra) {
        root->right = avl_insert(root->right, key, nota);
    }
    update_height(root);

    return avl_rebalance(root);;
}

void fill_spaces(int size) {
    for (int i = 0; i < size; i++) {
        printf(" ");
    }
}

void print_with_indent(avl_node_t* root, int indent) {
    if (root != NULL) {
        printf("\n");
        fill_spaces(indent);
        printf("(");
        printf("%d,%d", root->ra, avl_height(root));
        print_with_indent(root->right, indent + 2);
        print_with_indent(root->left, indent + 2);
        printf(")");
    } else {
        printf("\n");
        fill_spaces(indent);
        printf("()");
    }
}

void avl_print(avl_node_t* root) {
    print_with_indent(root, 0);
}