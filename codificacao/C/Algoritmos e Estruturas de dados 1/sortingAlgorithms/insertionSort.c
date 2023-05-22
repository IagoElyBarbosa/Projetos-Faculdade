#include <stdio.h>
#include <stdlib.h>

typedef struct registro {
int key;
int data;
} registro;

void insert(registro *base, int k);
void insertionSort(registro *base, int n);

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
    
    insertionSort(base, n);
    
    for(int i=0; i<n; i++) {
        
        printf("%d ", base[i].key);
    }printf("\n");
    
}


void insert(registro *base, int k) {
    registro x = base[k];
    --k;
    
    while(k>=0 && base[k].key > x.key) {
        base[k + 1] = base[k];
        --k;
    }
    base[k+1] = x;
}

void insertionSort(registro *base, int n) {
    int k = 1;
    
    while(k < n) {
        insert(base, k);
        ++k;
    }
}