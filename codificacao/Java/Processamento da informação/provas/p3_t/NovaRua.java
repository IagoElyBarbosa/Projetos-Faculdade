import java.util.Scanner;

public class NovaRua{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int  mat[][], vetAux[], n, m;
        n = scan.nextInt();
        m = scan.nextInt();
        mat = new int[n][m];
        vetAux = new int[n];

        leMatriz(mat, scan);
        leVetorDescobreMaior(mat, vetAux);
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static void leVetorDescobreMaior(int[][] matriz, int[] vetor){
        int i, j, menor=1000000;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                vetor[i] += matriz[i][j];
            }
        }
        for(i=0;i<vetor.length;i++){
            if(menor > vetor[i]){
                menor = vetor[i];
            }
        }System.out.println(menor);
    }
}