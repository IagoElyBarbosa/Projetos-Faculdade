#include <stdio.h>
#include <stdlib.h>

#define max(a, b) (a > b ? a : b)

typedef struct LinkedList {
    int val;
    struct LinkedList *next;
} LinkedList;

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

typedef struct node {
    int value;
    struct node* left;
    struct node* right;
} node;

node* new_node(int value) {
    node* root = (node*) malloc(sizeof(node));
    root->value = value;
    root->left = NULL;
    root->right = NULL;
    return root;
}
void free_list(LinkedList* list) {
    if (list == NULL) return;
    free_list(list->next);
    free(list);
}

node* insert_node(node* root, int value) {
    if (root == NULL) {
        return new_node(value);
    }
    if (value < root->value) {
        root->left = insert_node(root->left, value);
    } else if (value > root->value) {
        root->right = insert_node(root->right, value);
    }
    return root;
}

node* smallest_node(node* root) {
    node* walker = root;
    while( walker->left != NULL) walker = walker->left;
    return walker;
}

node* remove_node(node* root, int value) {
    node* t;
    if (root == NULL) {
        return NULL;
    }
    if (value == root->value) {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        } else if (root->right == NULL) {
            t = root->left;
            free(root);
            return t;
        } else if (root->left == NULL) {
            t = root->right;
            free(root);
            return t;
        } else {
            t = smallest_node(root->right);
            root->value = t->value;
            root->right = remove_node(root->right, t->value);
            return root;
        }
    } else if (value < root->value) {
        root->left = remove_node(root->left, value);
    } else {
        root->right = remove_node(root->right, value);
    }

    return root;
}

void free_tree(node* root) {
    if (root == NULL) return;
    free_tree(root->left);
    free_tree(root->right);
    free(root);
}

node* binary_search(node* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }
    if (value < root->value) {
        return binary_search(root->left, value);
    } else {
        return binary_search(root->right, value);
    }
}

int height(node* root) {
    if (root == NULL) {
        return 0;
    } else {
        return 1 + max(height(root->left), height(root->right));
    }
}

// Função para contar o número de nós da árvore binária
int count_nodes(node* root) {
    if (root == NULL) {
        return 0;
    } else {
        return 1 + count_nodes(root->left) + count_nodes(root->right);
    }
}

LinkedList* pre_order(node* root) {
    if (root == NULL) return NULL;
    LinkedList* list = create_node(root->value);
    list = concat(list, pre_order(root->left));
    list = concat(list, pre_order(root->right));
    return list;
}

LinkedList* in_order(node* root) {
    if (root == NULL) return NULL;
    LinkedList* list = in_order(root->left);
    list = concat(list, create_node(root->value));
    list = concat(list, in_order(root->right));
    return list;
}

LinkedList* post_order(node* root) {
    if (root == NULL) return NULL;
    LinkedList* list = post_order(root->left);
    list = concat(list, post_order(root->right));
    list = concat(list, create_node(root->value));
    return list;
}

int main() {
    node* root = NULL;
    LinkedList* list = NULL;
    LinkedList* walker = NULL;
    root = insert_node(root, 10);
    insert_node(root, 5);
    insert_node(root, 15);
    insert_node(root, 3);
    insert_node(root, 7);
    insert_node(root, 13);
    insert_node(root, 17);

    printf("Árvore binária:\n");
    printf("      10\n");
    printf("     /  \\\n");
    printf("    5    15\n");
    printf("   / \\   / \\\n");
    printf("  3   7 13 17\n");

    int value = 7;
    node* result = binary_search(root, value);
    if (result == NULL) {
        printf("\n%d não foi encontrado na árvore binária.\n", value);
    } else {
        printf("\n%d foi encontrado na árvore binária.\n", value);
    }

    int tree_height = height(root);
    printf("\nAltura da árvore binária: %d\n", tree_height);

    int node_count = count_nodes(root);
    printf("\nNúmero de nós da árvore binária: %d\n", node_count);

    list = pre_order(root);
    walker = list;
    while(walker != NULL) {
        printf("%d ", walker->val);
        walker = walker->next;
    }
    printf("\n");
    free_list(list);

    remove_node(root, 5);
    list = pre_order(root);
    walker = list;
    while(walker != NULL) {
        printf("%d ", walker->val);
        walker = walker->next;
    }
    printf("\n");
    free_list(list);

    free_tree(root);

    return 0;
}