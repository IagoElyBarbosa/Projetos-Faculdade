#include "aluno.h"
#include <stdlib


int main(void){
    
    Aluno a1 = create_aluno_ptr(123, "João Silva", "BC&T");
    
    print_aluno(*a1);
    
    free(a1);
    
    return 0;
}