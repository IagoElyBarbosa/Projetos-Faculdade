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
void calculos(Lista *li);

int main(void){
    int i, n;
    Lista *li;

    li = cria_lista();

    for(i=0;i<tamArray;i++){
        scanf("%d", &n);
        printf("oi %d\n", insere_lista_final(li, n));
    }

    calculos(li);

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
            no->prox = NULL;
            if((*li) == NULL){
                *li = no;
                printf("Primeirolaço\n");
                return 1;
            }else{
                Elem *aux;
                aux = *li;

                while(aux->prox != NULL){
                    aux = aux->prox;
                }
                aux->prox = no;
                printf("Demaislaços\n");
                return 1;
            }
        }
    }
}

void calculos(Lista *li){
    int qtdPar=0, maior=0, posMaior=0, somList=0, i;
    float media=0.0;
    if(li != NULL){
        Elem *aux;
        aux = *li;
        i=0;
        while((aux) != NULL){
            if((aux->num) % 2 == 0){
                qtdPar++;
            }
            if(aux->num > maior){
                maior = aux->num;
                posMaior = i;
            }
            somList += aux->num;
            i++;

            aux = aux->prox;
        }

        media = (float)somList / i;

        printf("a) Qtd. pares: %d\n", qtdPar);
        printf("b) Media: %.2f\n", media);
        printf("c) Maior: %d\n", maior);
        printf("d) Posicao (Maior): %d\n", posMaior);
        printf("e) Soma: %d\n", somList);
    }
}