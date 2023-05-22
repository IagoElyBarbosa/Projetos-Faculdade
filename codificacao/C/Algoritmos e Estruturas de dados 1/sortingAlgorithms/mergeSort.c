#include <stdio.h>
#include <stdlib.h>

typedef struct registro {
int key;
int data;
} registro;

void mergeSort(registro *base, int n);
void merge(registro *base, int m, int n);

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
    
    mergeSort(base, n);
    
    for(int i=0; i<n; i++) {
        
        printf("%d ", base[i].key);
    }printf("\n");
    
}

void mergeSort(registro *base, int n){
    if(n>1) {
        int middle = n/2;
        mergeSort(base, middle);
        mergeSort(base+middle, n-middle);
        merge(base, middle, n);
    }
}
void merge(registro *base, int m, int n){
    registro x[n];
    int j=0, k=m;
    
    for(int i=0; i<n; i++) {
        if(j==m) x[i] = base[k++];
        else if(k==n) x[i] = base[j++];
        else if(base[j].key < base[k].key) x[i] = base[j++];
        else x[i] = base[k++];
    }
    
    for(int i=0; i<n; i++) base[i] = x[i];
}