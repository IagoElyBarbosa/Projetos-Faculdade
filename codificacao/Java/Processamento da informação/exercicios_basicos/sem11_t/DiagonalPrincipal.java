import java.util.Scanner;

public class DiagonalPrincipal{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], n;
        double soma, media;
        char opera;
        opera = scan.next().charAt(0);
        n = scan.nextInt();
        mat = new int[n][n];

        leMatriz(mat, scan);

        if(opera == 'S'){
            soma = somaDiagonalPrincipal(mat);
            System.out.printf("%.1f\n", soma);
        }else{
            media = mediaDiagonalPrincipal(mat, n);
            System.out.printf("%.1f\n", media);
        }
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static double somaDiagonalPrincipal(int[][] matriz){
        int i, j;
        double soma=0.f;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<i+1;j++){
                if(j == i){
                    soma += matriz[i][j];
                }
            }
        }
        return soma;
    }
    public static double mediaDiagonalPrincipal(int[][] matriz, int n){
        int i, j;
        double media, soma=0.f;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<i+1;j++){
                if(j == i){
                    soma += matriz[i][j];
                }
            }
        }
        media = soma / (double)n;

        return media;
    }
}