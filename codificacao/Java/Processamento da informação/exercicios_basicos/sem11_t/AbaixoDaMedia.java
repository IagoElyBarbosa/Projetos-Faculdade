import java.util.Scanner;

public class AbaixoDaMedia{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        float turma[][];
        int n;
        n = scan.nextInt();
        turma = new float[n][3];

        leMatriz(turma, scan);
        calculaMediaExibeMenorNota(turma, n);

    }
    public static void leMatriz(float[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<3;j++){
                matriz[i][j] = scan.nextFloat();
            }
        }
    }
    public static void calculaMediaExibeMenorNota(float[][] matriz, int n){
        int i, j;
        float somaAtividade1=0.f, somaAtividade2=0.f, somaAtividade3=0.f,
        media1, media2, media3;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<3;j++){
                if(j == 0){
                    somaAtividade1 += matriz[i][j];
                }else if(j == 1){
                    somaAtividade2 += matriz[i][j];
                }else{
                    somaAtividade3 += matriz[i][j];
                }
            }
        }
        media1 = somaAtividade1 / (float)n;
        media2 = somaAtividade2 / (float)n;
        media3 = somaAtividade3 / (float)n;

        contaQtdAbaixExibe(matriz, media1, media2, media3);

    }
    public static void contaQtdAbaixExibe(float[][] matriz, float media1, float media2, float media3){
        int i, j, countAbaix1=0, countAbaix2=0, countAbaix3=0;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<3;j++){
                if(j == 0){
                    if(matriz[i][j] <= media1){
                        countAbaix1++;
                    }
                }else if(j == 1){
                    if(matriz[i][j] <= media2){
                        countAbaix2++;
                    }
                }else{
                    if(matriz[i][j] <= media3){
                        countAbaix3++;
                    }
                }
            }
        }
        System.out.println("Na 1a. atividade " + countAbaix1 + " alunos tiveram nota abaixo da media.");
        System.out.println("Na 2a. atividade " + countAbaix2 + " alunos tiveram nota abaixo da media.");
        System.out.println("Na 3a. atividade " + countAbaix3 + " alunos tiveram nota abaixo da media.");
    }
}