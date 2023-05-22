#include "aluno.h"
#include <stdio.h>

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
