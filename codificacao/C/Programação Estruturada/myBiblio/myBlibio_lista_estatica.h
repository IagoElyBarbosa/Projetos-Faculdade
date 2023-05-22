#include <stdio.h>
#include <stdlib.h>

#define tamMax 20

typedef struct{
    int qtd;
    int array[tamMax];
} Lista;

Lista* cria_lista();
void libera_lista(Lista *li);
int tamanho_lista(Lista *li);
int lista_cheia(Lista *li);
int lista_vazia(Lista *li);
int insere_lista(Lista *li, int n);
int insere_lista_inicio(Lista *li, int n);
int remove_lista_inicio(Lista *li);
int remove_lista_final(Lista *li);
int remove_lista_elemento(Lista *li, int elem);
int busca_lista_pos(Lista *li, int pos);
int busca_lista_counteudo(Lista *li, int conteu);
void imprime_lista(Lista *li);

