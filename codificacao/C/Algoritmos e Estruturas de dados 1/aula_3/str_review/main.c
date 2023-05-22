#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char s1[100] = "Hello World!";

    puts(s1);

    char s2[100];

    strcpy(s2, "Hello World 2");

    puts(s2);

    char s3[100];
    char temp;

    //scanf("%[^\n]", s3);
    //scanf("%c", &temp);
    //puts(s3);

    char s4[100];

    //scanf("%[^\n]", s4);
    //scanf("%c", &temp);
    //puts(s4);

    char* s5 = "Hello World 5";

    puts(s5);

    char* s6;

    s6 = "Hello World 6";

    puts(s6);

    char* s7 = malloc(sizeof(char) * 100);

    scanf("%[^\n]", s7);
    scanf("%c", &temp);

    puts(s7);

    free(s7);

    return 0;
}