#include <stdio.h>
#include <stdlib.h>

#define tamArray 5

struct elemento{
    int num;
    struct elemento *prox;
};

typedef struct elemento Elem;
typedef struct elemento *Lista;

Lista* cria_lista();
int insere_lista_final(Lista *li, int n);
void verificar(Lista *li_1, Lista *li_2);

int main(void){
    int i, n;
    Lista *li_1, *li_2;

    li_1 = cria_lista();
    li_2 = cria_lista();

    for(i=0;i<(tamArray * 2)/*duas listas*/;i++){
        if(i < 5){
            scanf("%d", &n);
            printf("%d\n", insere_lista_final(li_1, n));
        }else{
            scanf("%d", &n);
            printf("%d\n", insere_lista_final(li_2, n));
        }
    }

    verificar(li_1, li_2);

    return 0;
}

Lista* cria_lista(){
    Lista *li;
    li = (Lista *)malloc(sizeof(Lista));

    if(li != NULL){
        (*li) = NULL;
    }
    return li;
}

int insere_lista_final(Lista *li, int n){
    if(li == NULL){
        return 0;
    }else{
        Elem *no;
        no = (Elem *)malloc(sizeof(Elem));

        if(no == NULL){
            return 0;
        }else{
            no->num = n;
            no->prox=NULL;

            if((*li) == NULL){
                *li = no;
                printf("primeirolaço\n");
                return 1;
            }else{
                Elem *aux;
                aux = *li;
                while(aux->prox != NULL){
                    aux = aux->prox;
                }

                aux->prox = no;
                printf("demaislaços\n");
                return 1;
            }
        }
    }
}

void verificar(Lista *li_1, Lista *li_2){
    int local=0;
    if(li_1 != NULL){
        if(li_2 != NULL){
            Elem *aux_1, *aux_2;
            aux_1 = *li_1;
            aux_2 = *li_2;

            while(aux_1 != NULL){
                if(aux_1->num != aux_2->num){
                    local++;
                }
                aux_1 = aux_1->prox;
                aux_2 = aux_2->prox;
            }

            if(local != 0){
                printf("Diferentes!\n");
            }else{
                printf("Iguais!\n");
            }
        }
    }
}