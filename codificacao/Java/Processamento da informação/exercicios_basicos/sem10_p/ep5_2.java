import java.util.Scanner;

public class ep5_2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int  l, c, matNumerica[][];
        l = scan.nextInt();
        c = scan.nextInt();
        matNumerica = new int[l][c];

        leMatriz(matNumerica, scan);
        multColunaImpar(matNumerica);
        exibeMatriz(matNumerica, l, c);
    }
    public static void leMatriz(int[][] matNumerica, Scanner scan){
        int i, j;
        for(i=0;i<matNumerica.length;i++){
            for(j=0;j<matNumerica[0].length;j++){
                matNumerica[i][j] = scan.nextInt();
            }
        }
    }
    public static void multColunaImpar(int[][] matNumerica){
        int i, j;
        for(i=0;i<matNumerica.length;i++){
            for(j=1;j<matNumerica[0].length;j+=2){
                matNumerica[i][j] *= 3;
            }
        }
    }
    public static void exibeMatriz(int[][] matNumerica, int l, int c){
         for(l=0;l<matNumerica.length;l++){
            for(c=0;c<matNumerica[0].length;c++){
                System.out.print(matNumerica[l][c] + " ");
            }
            System.out.println();
         }
    }

}