import java.util.Scanner;
import java.util.Objects;

public class Logotipo{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int matMaior[][], matMenor[][], x, y;
        boolean verifica;
        
        x = scan.nextInt();
        matMenor = new int[x][x];
        leMatriz(matMenor, scan);
        
        y = scan.nextInt();
        matMaior = new int[y][y];
        leMatriz(matMaior, scan);
        
        verifica = achaMatriz(matMaior, matMenor, x, y);
        
        if(verifica == true){
            System.out.println("sim");
        }else{
            System.out.println("nao");
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
    public static boolean achaMatriz(int[][] matrizMaior, int[][] matrizMenor, int x, int y){
        int i, j, k, l;
        for (i=0; i<=y-x; i++){
            r : for(j=0; j<=y-x; j++){
                for (k=0; k<x; k++){
                    for (l=0; l<x; l++){
                        if (matrizMaior[i + k][j + l] != matrizMenor[k][l]) continue r;
                    }
                }
                return true;
            }
        }
        return false;
    }
}