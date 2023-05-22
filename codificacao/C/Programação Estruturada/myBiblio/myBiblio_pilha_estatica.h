#include <stdio.h>
#include <stdlib.h>

#define tamArray 30

struct pilha{
    int qtd;
    int array[tamArray];
};

typedef struct pilha Pilha;

int insere_pilha(Pilha *pi, int n);
int remove_pilha(Pilha *pi);