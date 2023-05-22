#include <stdio.h>

int main(void){
    int count, i;
    char str[8];
    
    do{
        count = 0;
        
        scanf("%s", str);
        
        for(i=0;str[i]!='\0';i++){
            count++;
        }
        
        if(count > 5){
            printf("Digite novamente a string com ate 5 caracteres:\n");
        }
        
    }while(count > 5);
    
    for(i=(count - 1);i>=0;i--){
        printf("%c ", str[i]);
    }printf("\n");
    
    return 0;
}