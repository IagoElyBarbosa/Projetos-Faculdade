#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;

struct fila{
    struct Elem *ini;
    struct Elem *fim;
    int qtd;
};

typedef struct fila Fila;

Fila* cria_fila();
int insere_fila(Fila *fi, int n);
int remove_fila(Fila *fi);
void libera_fila(Fila *fi);