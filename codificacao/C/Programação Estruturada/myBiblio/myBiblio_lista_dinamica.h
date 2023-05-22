#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *Lista;

Lista* cria_lista();
void libera_lista(Lista *li);
int insere_lista_inicio(Lista *li, int n);
int insere_lista_final(Lista *li, int n);
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
int remove_lista_meio(Lista *li, int elem);