import java.util.Scanner;

public class leds{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String mat[][];
        int n, m, vetAuxiliar[];
        n = scan.nextInt();
        m = scan.nextInt();
        mat = new String[n][m];
        vetAuxiliar = new int[m];

        leMatriz(mat, scan);
        somaLed(mat, vetAuxiliar);
        descobreMaiorColunaEPrinta(vetAuxiliar, mat);
    }
    public static void leMatriz(String[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.next();
            }
        }
    }
    public static int ledValor(String numero){
        int i, soma=0;
        for(i=0;i<numero.length();i++){
            if(numero.charAt(i) == '0'){
                soma += 6;
            }else if(numero.charAt(i) == '1'){
                soma += 2;
            }else if(numero.charAt(i) == '2'){
                soma += 5;
            }else if(numero.charAt(i) == '3'){
                soma += 5;
            }else if(numero.charAt(i) == '4'){
                soma += 4;
            }else if(numero.charAt(i) == '5'){
                soma += 5;
            }else if(numero.charAt(i) == '6'){
                soma += 6;
            }else if(numero.charAt(i) == '7'){
                soma += 3;
            }else if(numero.charAt(i) == '8'){
                soma += 7;
            }else{
                soma += 6;
            }
        }
        return soma;
    }
    public static void somaLed(String[][] matriz, int vetor[]){
        int i, j, soma=0;
        for(i=0;i<matriz[0].length;i++){
            soma = 0;
            for(j=0;j<matriz.length;j++){
                soma += ledValor(matriz[j][i]);
            }
            vetor[i] = soma;
        }

    }
    public static void descobreMaiorColunaEPrinta(int[] vetor, String[][] matriz){
        int i, j, maior=0, indiceMaior=0, indiceSegMaior=0;
        for(i=0;i<vetor.length;i++){
            if(vetor[i] > maior){
                maior = vetor[i];
                indiceMaior = i;
            }else if(vetor[i] == maior){
                indiceSegMaior = i;
            }
        }

        for(i=0;i<vetor.length;i++){
            if(i == indiceMaior){
                System.out.println("coluna " + (indiceMaior+1) + " acende " + vetor[i] + " leds: ");
            }
        }
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(j == indiceMaior){
                    System.out.print(matriz[i][j] + " ");
                    System.out.println();
                }
            }
        }
        if(indiceSegMaior != 0){
            for(i=0;i<vetor.length;i++){

                if(i == indiceSegMaior){
                    System.out.println("coluna " + (indiceSegMaior+1) + " acende " + vetor[i] + " leds: ");
                }
            }
            for(i=0;i<matriz.length;i++){
                for(j=0;j<matriz[0].length;j++){
                    if(j == indiceSegMaior){
                        System.out.print(matriz[i][j] + " ");
                        System.out.println();
                    }
                }
            }
        }
    }
}