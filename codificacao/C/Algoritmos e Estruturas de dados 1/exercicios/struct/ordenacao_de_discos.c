#include <stdio.h>

struct DiscoVoador {
    char *modelo;
    char *planeta;
    int autonomia;
};

typedef struct DiscoVoador DiscoVoador;

int verificar_ordenacao(DiscoVoador *discos, int n_discos);
int modelo_lexico_cresc (DiscoVoador *discos, int n_discos);
int modelo_lexico_decresc (DiscoVoador *discos, int n_discos);
int planeta_lexico_cresc_desempate (DiscoVoador *discos, int n_discos);
int caso_4(DiscoVoador *discos, int n_discos);
int compare_strings_cres(char str1[], char str2[]);
int compare_strings_decres(char str1[], char str2[]);
int compare_strings_cres_desempate(char str1[], char str2[], int value_1, int value_2);
int autonomiaCres_planetaDecres_modeloCres(int value_1, int value_2, char strP1[], char strP2[], char strM1[], char strM2[]);
int compare_values_decres(int value_1, int value_2);
int compare_values_cres(int value_1, int value_2);

int main(void) {

    DiscoVoador discos[] = {
        {
        .modelo = "DiscoB",
         .planeta = "Terra",
         .autonomia = 20
        },

        {
        .modelo = "DiscoC",
         .planeta = "Marte",
         .autonomia = 25
        },

        {
        .modelo = "DiscoD",
         .planeta = "Marte",
         .autonomia = 40
        },

        {
        .modelo = "DiscoE",
         .planeta = "Marte",
         .autonomia = 40
        },

        {
        .modelo = "DiscoF",
         .planeta = "Jupiter",
         .autonomia = 90
        },

        {
        .modelo = "DiscoG",
         .planeta = "Saturno",
         .autonomia = 90
        },

        {
        .modelo = "DiscoH",
         .planeta = "Saturno",
         .autonomia = 150
        },

        {
        .modelo = "DiscoA",
         .planeta = "Terra",
         .autonomia = 500
        },
    };

    verificar_ordenacao(discos, 8);


    return 0;
}

// funcao principal, principais ifs da pagina do moodle

int verificar_ordenacao(DiscoVoador *discos, int n_discos) {

    if (modelo_lexico_cresc(discos, n_discos) == 1) {
        printf("1\n");
    }

    else if (modelo_lexico_decresc(discos, n_discos) == 1) {
        printf("2\n");
    }

    else if (planeta_lexico_cresc_desempate(discos, n_discos) == 1) {
        printf("3\n");
    }

    else if (caso_4(discos, n_discos) == 1) {
        printf("4\n");
    }

    return 0;
}

// verifica o modelo lexico crescente A-Z ----------1----------

int modelo_lexico_cresc (DiscoVoador *discos, int n_discos) {

    int i=0, count=0;

    for(i=0; i<(n_discos-1); i++) {

        if(compare_strings_cres(discos[i].modelo, discos[i+1].modelo) == -1) {
            count++;
        }
    }

    if (count == n_discos - 1) {
        return 1;
    }else {
        return 0;
    }

}

// verifica o modelo lexico decrescente Z-A ----------2----------

int modelo_lexico_decresc (DiscoVoador *discos, int n_discos) {

    int i=0, count=0;

    for(i=0; i<(n_discos-1); i++) {

        if(compare_strings_decres(discos[i].modelo, discos[i+1].modelo) == -1) {
            count++;
        }
    }

    if (count == n_discos - 1) {
        return 1;
    }else {
        return 0;
    }

}

// verifica planeta lexico crescente e desempate autonomia decrescente ----------3----------

int planeta_lexico_cresc_desempate (DiscoVoador *discos, int n_discos) {

    int i=0, count=0;

    for(i=0; i<(n_discos-1); i++) {

        if(compare_strings_cres_desempate(discos[i].planeta, discos[i+1].planeta, discos[i].autonomia, discos[i+1].autonomia) == -1) {
            count++;
        }
    }

    if (count == n_discos - 1) {
        return 1;
    }else {
        return 0;
    }

}

// verifica autonomia cres desempate planeta lexico decres e em caso de ambos empates modelo lexico cres ----------4----------

int caso_4(DiscoVoador *discos, int n_discos) {

    int i=0, count=0;

        for(i=0; i<(n_discos-1); i++) {

            if(autonomiaCres_planetaDecres_modeloCres(discos[i].autonomia, discos[i+1].autonomia, discos[i].planeta, discos[i+1].planeta, discos[i].modelo, discos[i+1].modelo) == -1) {
                count++;
            }
        }

        if (count == n_discos - 1) {
            return 1;
        }else {
            return 0;
        }
}


// compara autonomia cres / planeta cres / modelo cres

int autonomiaCres_planetaDecres_modeloCres(int value_1, int value_2, char strP1[], char strP2[], char strM1[], char strM2[]) {
   
   if (compare_values_cres(value_1, value_2) == -1){
       return -1;
   } else {
       if (compare_values_cres(value_1, value_2) == 0) {
           if(compare_strings_cres(strP1, strP2) == -1) {
               return -1;
           } else {
               if(compare_strings_cres(strP1, strP2) == 0) {
                   if(compare_strings_cres(strM1, strM2) == -1 || compare_strings_cres(strM1, strM2) == 0) {
                       return -1;
                   }
               }
           }
       }
   }

    return 0;
}



// compara as strings em ordem alfabetica crescente

int compare_strings_cres(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

// compara as strings em ordem alfabetica crescente com criterio de desempate

int compare_strings_cres_desempate(char str1[], char str2[], int value_1, int value_2) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        if (compare_values_decres(value_1, value_2) == -1) {
            return -1;
        }else {
            return 0;
        }
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

// compara as strings em ordem alfabetica decrescente

int compare_strings_decres(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return -1;
        } else if (str1[i] < str2[i]) {
            return 1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int compare_values_decres(int value_1, int value_2) {

    if(value_1 < value_2) {
        return 1;
    }else {
        return -1;
    }
}

int compare_values_cres(int value_1, int value_2) {

    if(value_1 > value_2) {
        return 1;
    }else if(value_1 == value_2) {
        return 0;
    } else {
        return -1;
    }
}