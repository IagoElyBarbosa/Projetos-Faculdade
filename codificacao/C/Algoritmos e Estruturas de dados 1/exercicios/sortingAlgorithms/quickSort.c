#include <stdio.h>
#include <stdlib.h>

typedef struct Disco Disco;
struct Disco {
   int codigo;
   double preco;
};

int quickSort(Disco *v, int n, int tipo);
void sortType_1 (Disco *v, int low, int high, int *contador);
void sortType_2 (Disco *v, int low, int high, int *contador);
void swap(Disco *a, Disco *b);

int main(void) {
    
    Disco *v;
    int size, cod, sortingType;
    double price;
    
    scanf("%d", &size);
    
    v = malloc(sizeof(Disco) * size);
    
    for(int i=0; i<size; i++) {
        scanf("%d", &cod);
        scanf("%lf", &price);
        
        v[i].codigo = cod;
        v[i].preco = price;
    }
    
    scanf("%d", &sortingType);
    
    
    printf("antes da ordenacao\n");
    for(int i=0; i<size; i++) {
        printf("%d", v[i].codigo);
        printf(" %lf\n", v[i].preco);;
    }
    
    
    printf("\n\nquantidade de comparações: %d\n\n", quickSort(v, size, sortingType));
    
    if(sortingType == 1) {
        printf("depois da ordenacao(ordem crescente)\n");
        for(int i=0; i<size; i++) {
            printf("%d", v[i].codigo);
            printf(" %lf\n", v[i].preco);;
        }   
    }
    if(sortingType == 2) {
        printf("depois da ordenacao(ordem decrescente)\n");
        for(int i=0; i<size; i++) {
            printf("%d", v[i].codigo);
            printf(" %lf\n", v[i].preco);;
        }   
    }
    
    
    return 0;  
}

// Nota: a escolha do pivô deve ser o último elemento.

int quickSort(Disco *v, int n, int tipo) {
    
    int contador=0;
    
    if(tipo == 1) {
        sortType_1(v, 0, (n-1), &contador);
        // possivel erro
        contador++;
    } else if(tipo == 2) {
        sortType_2(v, 0, (n-1), &contador);
    }else {
        contador = 0;
    }
    
    return contador;
}

void sortType_1 (Disco *v, int low, int high, int *contador) {
    
    int i = low, j = high;
    Disco pivot = v[high];
    
    /*partition*/
    
    while(i <= j) {
        while(v[i].codigo < pivot.codigo){
            i++;
            (*contador)++;   
        }
        while(v[j].codigo > pivot.codigo){
            j--;
            (*contador)++;
        }
        if (i<=j) {
            //(*contador)++;
            swap(v+i, v+j);
            i++;
            j--;
        }
    }
    
    if(low < j)
        sortType_1(v, low, j, contador);
    if(i < high)
        sortType_1(v, i, high, contador);
}

void sortType_2 (Disco *v, int low, int high, int *contador) {
    
    int i = low, j = high;
    Disco pivot = v[high];
    
    /*partition*/
    
    while(i <= j) {
        while(v[i].codigo > pivot.codigo){
            i++;
            (*contador)++;
        }
        while(v[j].codigo < pivot.codigo){
            j--;
            (*contador)++;
        }
        if (i<=j) {
            //(*contador)++;
            swap(v+i, v+j);
            i++;
            j--;
        }
    }
    
    if(low < j)
        sortType_2(v, low, j, contador);
    if(i < high)
        sortType_2(v, i, high, contador);
}

void swap(Disco *a, Disco *b) {
    Disco temp = *a;
    *a = *b;
    *b = temp;
}

