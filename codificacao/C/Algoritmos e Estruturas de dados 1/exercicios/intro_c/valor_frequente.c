#include <stdio.h>

void leVetor(int v[], int n);
int valor_frequente(int v[], int n);;


int main(void){
    
    int n;
    
    scanf("%d", &n);
    
    int vet[n];
    
    leVetor(vet, n);
    printf("%d", valor_frequente(vet, n));
    
    return 0;
}

void leVetor(int v[], int n){
    int i;
    
    for(i=0;i<n;i++){
        
        scanf("%d", &v[i]);
    }
}

int valor_frequente(int v[], int n){
    int i, j, vetAux[n], count=1, maior=0, iMaior=0;
    
    for(i=0;i<n;i++){
        
        count = 1;
        
        for(j=0;j<n;j++){
            if(i != j){
                if(v[i] == v[j]){
                    count++;
                }
            }
        }
        
        vetAux[i] = count;
    }
    
    for(i=0;i<n;i++){
        if(vetAux[i] > maior){
            maior = vetAux[i];
            iMaior = i;
        }
    }
    return v[iMaior];
}