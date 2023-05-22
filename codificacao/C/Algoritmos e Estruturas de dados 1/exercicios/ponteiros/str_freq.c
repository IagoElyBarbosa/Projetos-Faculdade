#include <stdio.h>

void frequencia_string(const char *str, const char *text, int *qtd);

int main(void){
    int* qtd=NULL, a=0;
    const char text[9] = "oiOioIOI";
    const char str[3] = "oi";
    
    qtd = &a;
    
    frequencia_string(str, text, qtd);
    
    return 0;
}

void frequencia_string(const char *str, const char *texto, int *qtd){
    
    int str_length=0, text_length=0, count_verif=0, count_comp=0, i=0;
    
    char mod_str[1000], mod_text[1000];

    while (str[i] != '\0' || texto[i] != '\0') {
        if (str[i] != '\0') {
            mod_str[i] = (str[i] >= 'A' && str[i] <= 'Z') ? str[i] + 32 : str[i];
            str_length++;
        }
        if (texto[i] != '\0') {
            mod_text[i] = (texto[i] >= 'A' && texto[i] <= 'Z') ? texto[i] + 32 : texto[i];
            text_length++;
        }
        i++;
    }

    mod_str[str_length] = '\0';
    mod_text[text_length] = '\0';
    
    for (int j=0; j<text_length; j++) {
        
        if (texto[j] == str[0]) {
            
            i=0;
            
            while (mod_str[i] != '\0') {
                if (mod_str[i] == texto[i]) {
                    count_verif++;
                    i++;
                }
            }
            
        }
        if (count_verif == str_length) {
            count_comp++;
        }
    }
    
    *qtd = count_comp;
    
}

