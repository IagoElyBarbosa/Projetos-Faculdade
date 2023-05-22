#include <stdio.h>
#include <stdlib.h>

#define tamArray 20

typedef struct lista{
    int qtd;
    int num[tamArray];
}Lista;


int insere_lista(Lista *li, int n);
Lista* cria_lista();
Lista* concatenar(Lista *li_1, Lista *li_2);

int main(void){
    int tam_1, tam_2, i, n=0;
    Lista *pList_1=NULL, *pList_2=NULL, *pList_3=NULL;

    pList_1 = cria_lista();
    pList_2 = cria_lista();
    pList_3 = cria_lista();

    scanf("%d", &tam_1);
    for(i=0;i<tam_1;i++){
        scanf("%d", &n);
        insere_lista(pList_1, n);
    }

    scanf("%d", &tam_2);
    for(i=0;i<tam_2;i++){
        scanf("%d", &n);
        insere_lista(pList_2, n);
    }

    pList_3 = concatenar(pList_1, pList_2);

    for(i=0;i<(pList_3->qtd);i++){
        printf("%d ", pList_3->num[i]);
    }

    return 0;
}

Lista* cria_lista(){
    Lista *li;
    li = (Lista *)malloc(sizeof(Lista));

    if(li != NULL){
        li->qtd = 0;
    }return li;
}

int insere_lista(Lista *li, int n){
    if(li == NULL){
        return 0;
    }else{
        if(li->qtd == tamArray){
            return 0;
        }else{
            li->num[li->qtd] = n;
            li->qtd++;
            return 1;
        }
    }
}

Lista* concatenar(Lista *li_1, Lista *li_2){
    int i, tam1, tam2;
    Lista *li_3;

    li_3 = cria_lista();

    tam1 = li_1->qtd;
    tam2 = li_2->qtd;

    for(i=0;i<tam1;i++){
        li_3->num[li_3->qtd] = li_1->num[i];
        li_3->qtd++;
    }

    for(i=0;i<tam2;i++){
        li_3->num[li_3->qtd] = li_2->num[i];
        li_3->qtd++;
    }

    return li_3;
}