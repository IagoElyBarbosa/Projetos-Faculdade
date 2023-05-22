#include <stdio.h>

int contaCaractere(char *nome);

int main(void){
    char nome[50];

    scanf("%s", nome);

    printf("%d\n", contaCaractere(nome));

    return 0;
}

int contaCaractere(char *nome){
    int count=0, i;
    for(i=0;*(nome + i)!='\0';i++){
        count++;
    }
    return count;

}