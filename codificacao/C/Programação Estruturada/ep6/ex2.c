#include <stdio.h>

int main(void){
    
    int x=2, y=5;
    
    if(&x > &y){
        printf("A\n");
    }else{
        printf("B\n");
    }
    
    return 0;
}