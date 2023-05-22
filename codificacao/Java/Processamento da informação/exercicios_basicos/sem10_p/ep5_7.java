import java.util.Scanner;

public class ep5_7{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], n, count, i, j;
        n = scan.nextInt();
        mat = new int[n][n];
        for(i=0;i<mat.length;i++){
            count = i + 1;
            for(j=0;j<mat[0].length;j++){
                mat[i][j] = count;
                count++;
            }
        }for(i=0;i<mat.length;i++){
            count = i + 1;
            for(j=0;j<mat[0].length;j++){
                System.out.print(mat[i][j] + " ");
            }
            System.out.println();
        }
    }
}