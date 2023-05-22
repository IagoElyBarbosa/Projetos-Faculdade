import java.util.Scanner;

public class ep5_5{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n, mat[][], somaAbaixoDigPar;
        n = scan.nextInt();
        mat = new int[n][n];

        leVetor(mat, scan);
        somaAbaixoDigPar = somaMat(mat);
        System.out.println(somaAbaixoDigPar);

    }
    public static void leVetor(int[][] mat, Scanner scan){
        int i, j;
        for(i=0;i<mat.length;i++){
            for(j=0;j<mat[0].length;j++){
                mat[i][j] = scan.nextInt();
            }
        }
    }
    public static int somaMat(int[][] mat){
        int i, j, soma=0;
        for(i=0;i<mat.length;i++){
            for(j=0;j<i;j++){
                if(i != 0){
                    if(mat[i][j] % 2 == 0){
                        soma += mat[i][j];
                    }
                }
            }
        }
        return soma;
    }
}