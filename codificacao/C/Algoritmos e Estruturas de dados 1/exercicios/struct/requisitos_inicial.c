#include <stdio.h>
#include <stdlib.h>

struct disciplina{
    int cod;
    char *nome;
    int creditos;
    Disciplina *requisito;
};


typedef struct disciplina Elem;
typedef struct disciplina *Disciplina;


Disciplina *requisito_inicial(Disciplina *disciplina, int *qtd);



Disciplina *requisito_inicial(Disciplina *disciplina, int *qtd) {
    int count=0;
    Disciplina *no = disciplina;
    
    while(no->requisito != NULL) {
        count++;
    }
    
    *qtd = count;
    
    return no;
}