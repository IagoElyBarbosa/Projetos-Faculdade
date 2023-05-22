#include <stdio.h>

void leVetor(int s, int v[]);
void conta_potencia_2(int s, int v[]);

int main(void){
    
   int size;
   
   scanf("%d", &size);
   
   int vet[size];
   
   leVetor(size, vet);
   conta_potencia_2(size, vet);
    
    return 0;
}

void leVetor(int s, int v[]){
    int i;
    
    for(i=0;i<s;i++){
        scanf("%d", &v[i]);
    }
}

void conta_potencia_2(int s, int v[]){
    int i, count=0, aux=0;
    
    for(i=0;i<s;i++){
        
        aux = v[i];
        
        if(aux != 1){
            
            while(aux % 2 == 0 && aux != 1){
                aux = aux / 2;
            }
            
            if(aux == 1){
                count++;
            }
        }
    }
    
    printf("%d", count);
}