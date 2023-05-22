import java.util.Scanner;

public class Q2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][];
        mat = new int[7][12];
        
        leMatriz(mat, scan);
        
        System.out.println("multiplicação pares na cor=1 é " + multiplicaPos1(mat) +"; e na outra cor é " + multiplicaPos0(mat));
        
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static long multiplicaPos1(int[][] matriz){
        int i, j;
        long multPos1Par=1;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(i % 2 == 0){
                    if(j % 2 != 0){
                        if(matriz[i][j] % 2 == 0){
                            multPos1Par *= matriz[i][j];
                        }
                    }
                }else{
                    if(j % 2 == 0){
                        if(matriz[i][j] % 2 == 0){
                            multPos1Par *= matriz[i][j];
                        }
                    }
                }
            }
        }
        return multPos1Par;
    }
    public static long multiplicaPos0(int[][] matriz){
        int i, j;
        long multPos0Par=1;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(i % 2 == 0){
                    if(j % 2 == 0){
                        if(matriz[i][j] % 2 == 0){
                            multPos0Par *= matriz[i][j];
                        }
                    }
                }else{
                    if(j % 2 != 0){
                        if(matriz[i][j] % 2 == 0){
                            multPos0Par *= matriz[i][j];
                        }
                    }
                }
            }
        }
        return multPos0Par;
    }
}