#include <stdio.h>
#include <stdlib.h>

typedef struct registro {
int key;
int data;
} registro;

void quickSort(registro *base, int n);
int partition(registro *base, int n);
void swap(registro *b1, registro *b2);

int main(void) {
    int n, value;
    registro *base;
    
    scanf("%d", &n);
    
    base = (registro *)malloc(sizeof(registro) * n);
    
    for(int i=0; i<n; i++) {
        scanf("%d", &value);
        
        base[i].key = value;
        base[i].data = i;
    }
    
    for(int i=0; i<n; i++) {
        
        printf("%d ", base[i].key);
    }printf("\n");
    
    quickSort(base, n);
    
    for(int i=0; i<n; i++) {
        
        printf("%d ", base[i].key);
    }printf("\n");
    
}

void quickSort(registro *base, int n) {
    if(n > 0) {
        int p = partition(base, n);
        quickSort(base, p);
        quickSort(base+p+1, n-p-1);
    }
}
int partition(registro *base, int n){
    registro pivot = base[0];
    int i=1,j;
    
    for(j=1; j<n; j++) {
        if(base[j].key < pivot.key) {
            swap(base+i,base+j);
            ++i;
        }
    }
    swap(base+i-1, base);
    return i-1;
}

void swap(registro *b1, registro *b2) {
    registro aux;
    
    aux = *b1;
    *b1 = *b2;
    *b2 = aux;
}