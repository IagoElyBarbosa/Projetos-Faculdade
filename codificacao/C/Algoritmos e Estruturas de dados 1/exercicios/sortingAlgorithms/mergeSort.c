#include <stdio.h>
#include <stdlib.h>

typedef struct comparacoes {
    int contador;
} comparacoes;

void mergeSort(int arr[], int l, int r, comparacoes *comp);
void merge(int arr[], int l, int m, int r, comparacoes *comp);


int main(void) {
    
    comparacoes *comp;
    
    comp = (comparacoes *)malloc(sizeof(comparacoes));
    
    comp->contador = 0;
    
    int n, value;
    
    scanf("%d", &n);
    
    int vet[n];
    
    for(int i=0; i<n; i++) {
        scanf("%d", &value);
        vet[i] = value;
    }
    
    mergeSort(vet, 0, n-1, comp);
   
   if(n != 0) {
        for(int i=0; i<n; i++) {
            if(i != n-1) {
                printf("%d ", vet[i]);
            }else {
                printf("%d\n", vet[i]);
            }
        }   
   } else {
       printf("\n");
   }
   
    printf("Comparacoes: %d\n", comp->contador);

    free(comp);
}

void mergeSort(int arr[], int l, int r, comparacoes *comp) {
    if (l < r) {
        // encontrar o ponto médio
        int m = l + (r - l) / 2;

        // ordenar a primeira e a segunda metade
        mergeSort(arr, l, m, comp);
        mergeSort(arr, m + 1, r, comp);

        // combinar as metades ordenadas
        merge(arr, l, m, r, comp);
    }
}

void merge(int arr[], int l, int m, int r, comparacoes *comp) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // criar subarrays temporários
    int L[n1], R[n2];

    // copiar dados para subarrays temporários L[] e R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // combinar os subarrays temporários novamente em arr[l..r]
    i = 0; // índice inicial do primeiro subarray
    j = 0; // índice inicial do segundo subarray
    k = l; // índice inicial do array mesclado
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
            comp->contador++;
        } else {
            arr[k] = R[j];
            j++;
            comp->contador++;
        }
        k++;
    }

    // copiar os elementos restantes de L[], se houver algum
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copiar os elementos restantes de R[], se houver algum
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}