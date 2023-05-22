#include <stdio.h>

int main(void){
    char str[8], cab;
    int i, count=0;
    
    scanf("%s", str);

    scanf("%c", &cab);
    scanf("%c", &cab);
    
    
    for(i=0;str[i] != '\0';i++){
        if(str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u'){
            count++;
            str[i] = cab;
        }
    }
    
    printf("A string possui %d vogais.\n", count);
    
    for(i=0;str[i]!='\0';i++){
        printf("%c", str[i]);
    }printf("\n");
    
    return 0;
}