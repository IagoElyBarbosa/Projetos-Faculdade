#include <stdio.h>

void imprimir_qtd_palavras(char texto[]);


int main(void){

    char texto[2000] = {"Algoritmos   e   Estruturas de Dados I. Nessa disciplina,     serao vistas estruturas de dados como   listas, pilhas, filas e arvores  .   Tambem serao vistos algoritmos de  busca  e  ordenacao. "};

    imprimir_qtd_palavras(texto);

    return 0;
}

void imprimir_qtd_palavras(char texto[]){
    int i, count=0, iAux=0, dif=0;

    do{

        count = 0;

        for(i=iAux; texto[i] != '.'; i++){
            if(texto[i+1] == ' ' && texto[i] !=  ' ' && texto[i] !=  ',' && texto[i] !=  '.'){
                count++;
            }else if(texto[i+1] == ',' && texto[i] !=  ' ' && texto[i] !=  ',' && texto[i] !=  '.'){
                count++;
            }else if(texto[i+1] == '.' && texto[i] !=  ' ' && texto[i] !=  ',' && texto[i] !=  '.'){
                count++;
            }
        }

        printf("%d\n", count);

        dif = i - iAux;

        iAux+=dif;
        iAux+=2;
    }while(texto[iAux] != '\0');
}