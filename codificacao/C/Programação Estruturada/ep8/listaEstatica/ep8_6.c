#include <stdio.h>
#include <stdlib.h>

#define tamArray 5

typedef struct lista{
    int qtd;
    int num[tamArray];
}Lista;

Lista* cria_lista();
int insere_lista(Lista *lista, int n);
void troca(Lista *li, int n1, int n2);

int main(void){
    Lista *li=NULL;
    int  i, num, t1, t2;

    li = cria_lista();


    for(i=0;i<5;i++){
        scanf("%d", &num);
        insere_lista(li, num);
    }

    scanf("%d", &t1);
    scanf("%d", &t2);

    troca(li, t1, t2);

    free(li);

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

void troca(Lista *li, int n1, int n2){
    int i, count1=0, count2=0, ind1=0, ind2=0, aux;

    for(i=0;i<tamArray;i++){
        if(li->num[i] == n1){
            ind1 = i;
        }
    }

    for(i=0;i<tamArray;i++){
        if(li->num[i] == n2){
            ind2 = i;
        }
    }

    aux = li->num[ind1];
    li->num[ind1] = li->num[ind2];
    li->num[ind2] = aux;

    for(i=0;i<tamArray;i++){
        printf("%d ", li->num[i]);
    }
}








