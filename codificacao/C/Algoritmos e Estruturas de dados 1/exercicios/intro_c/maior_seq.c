#include <stdio.h>
#include <stdlib.h>

void leVetor(int vetInt[], int size);
void devolveSequencia(int vetInt[], int size);

int main(void){

    int i, s;

    scanf("%d", &s);

    int vet[s];

    for(i=0;i<s;i++){
        scanf("%d", &vet[i]);
    }

    devolveSequencia(vet, s);

    return 0;
}

void devolveSequencia(int vetInt[], int size){
    int i, atu=0, prox=1, count=0, maior=0, iMaior=0;

    for(i=0;i<size;i++){ //primeiro laco, vai percorrer todo o vetor

        atu = i;
        prox = i + 1;
        count = 0;

        if(vetInt[atu] < vetInt[prox]){
            while(vetInt[atu] < vetInt[prox]){
                if(prox < size){
                    atu++;
                    prox++;
                    count++;
                }else{
                    break;
                }
            }
            if(count > maior){
                maior = count;
                iMaior = i;
            }

        }

    }

    for(int i=iMaior; i<=maior + iMaior;i++){
        printf("%d ", vetInt[i]);
    }
}