#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
}

typedef struct elemento Elem;
typedef struct elemento *Pilha;

int insere_pilha(Pilha *pi, int n);
int remove_pilha(Pilha *pi);
