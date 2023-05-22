#include "aluno.h"

int main(void){
    
    Aluno alunos[] = {
        {
         .ra = 123,
         .nome = "João Silva",
         .curso = "BC&T"
        },
        {
         .ra = 123,
         .nome = "João Silva",
         .curso = "BC&T"
        },
        
        {
         .ra = 123,
         .nome = "João Silva",
         .curso = "BC&T"
        }
    };
    
    
    print_alunos(alunos, 3);
    
    return 0;
}