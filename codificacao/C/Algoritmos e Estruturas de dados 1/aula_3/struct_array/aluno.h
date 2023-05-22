#ifndef aluno_h
#define aluno_h

typedef struct aluno{
    int ra;
    char nome[100];
    char curso[20];
}Aluno;

void print_aluno(Aluno a);
void print_alunos(Aluno* alunos, int size);

#endif