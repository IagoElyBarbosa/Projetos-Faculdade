#include "myBlibio_lista_estatica.h"

int main(void){
    int i, n;
    Lista *list;

    list = cria_lista();

    for(i=0;i<5;i++){
        scanf("%d", &n);
        insere_lista(list, n);
    }

    imprime_lista(list);


    return 0;
}