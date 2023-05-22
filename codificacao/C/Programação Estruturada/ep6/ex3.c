#include <stdio.h>

void change_valor(int *ptr_1, int *ptr_2);

int main(void){
    
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    change_valor(&a, &b);
    
    printf("%d\n", a);
    printf("%d\n", b);
    
    return 0;
}

void change_valor(int *ptr_1, int *ptr_2){
    int temp;
    temp = *ptr_1;
    *ptr_1 = *ptr_2;
    *ptr_2 = temp;
}