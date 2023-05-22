#include "aluno.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_aluno(Aluno a) {
    printf("RA: %d\n", a.ra);
    printf("Nome: %s\n", a.nome);
    printf("Curso: %s\n", a.curso);
    printf("\n);
}

void print_alunos(Aluno* alunos, int size) {
    for(int i=0; i<size; i++){
        printf("Aluno: %d\n", i + 1);
        print_aluno(alunos[i]);
    }
}

Aluno create_aluno(int ra, char* nome, char* curso){

        Aluno a;
        a.ra = ra;
        strcpy(a.nome, nome);
        strcpy(a.curso, curso);

    return a;
}

Aluno* create_aluno_ptr(int ra, char* nome, char* curso){

    Aluno* a = malloc(sizeof(Aluno));

    a->ra = ra;
    strcpy(a->nome, nome);
    strcpy(a->curso, curso);

    return a;
}