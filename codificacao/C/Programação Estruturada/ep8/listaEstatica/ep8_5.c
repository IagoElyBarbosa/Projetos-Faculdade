#include <stdio.h>
#include <stdlib.h>

#define tamArray 6

typedef struct lista{
    int qtd;
    int num[tamArray];
}Lista;

int insere_lista(Lista *li, int n);
Lista* cria_lista();
void remove_lista(Lista *li);

int main(void){
    int i, n, marcador;
    Lista *li=NULL;

    li = cria_lista();

    for(i=0;i<6;i++){
        scanf("%d", &n);
        insere_lista(li, n);
    }

    li->qtd--;
    i=0;

    marcador = li->num[li->qtd];

    while(i < marcador){
        remove_lista(li);
        i++;
    }

    for(i=0;i<li->qtd;i++){
        printf("%d ", li->num[i]);
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

void remove_lista(Lista *li){
    int i;

    for(i=0;i<li->qtd;i++){
        li->num[i] = li->num[i+1];
    }

    li->qtd--;
}