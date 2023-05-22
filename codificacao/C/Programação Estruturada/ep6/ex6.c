#include <stdio.h>

void changeStr(char *vet, char let);

int main(void){
    
    char vet[5], c;
    
    scanf("%s", vet);
    scanf(" %c", &c);
    
    changeStr(vet, c);
    
    printf("%s"\n, vet);
    
    return 0;
}

void changeStr(char *vet, char let){
    *(vet+0) = let;
    *(vet+1) = let;
    *(vet+2) = let;
    *(vet+3) = let;
    *(vet+4) = let;
}