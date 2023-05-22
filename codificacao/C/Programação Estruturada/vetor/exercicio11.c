9#include <stdio.h>

int main(void){
    int count=0, i;
    char entrada[100];
    
    
    do{
        count = 0;
        
        scanf("%s", entrada);
        
        for(i=0;entrada[i]!='\0';i++){
            count++;
        }
        
        if(count != 8){
            printf("Voce digitou uma string com %d caractere(s)!\n", count);
            printf("A string deve ter 8 caracteres. Por favor, digite uma nova string:\n");
        }

    
    }while(count != 8);
    
    for(i=0;i<4;i++){
            printf("%c", entrada[i]);
        }printf("\n");
    
    return 0;
}
