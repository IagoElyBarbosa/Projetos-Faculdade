#include <stdio.h>
#include <stdlib.h>

#define tamMax 30

struct fila{
    int qtd;
    int fim;
    int ini;
    int array[tamMax];
};

typedef struct fila Fila;

Fila* cria_fila();
int insere_fila(Fila *fi, int n);
int remove_fila(Fila *fi);