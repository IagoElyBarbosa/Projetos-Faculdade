import java.util.Scanner;

public class Triangular2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], n, countDiagAbaixo, countDiagAcima;
        n = scan.nextInt();
        mat = new int[n][n];
        
        leMatriz(mat, scan);
        countDiagAbaixo = contaDiagAbaixo(mat);
        countDiagAcima = contaDiagAcima(mat);
        
        if(countDiagAbaixo == 0 && countDiagAcima != 0){
            System.out.println("SIM: SUPERIOR");
        }else if(countDiagAcima == 0 && countDiagAbaixo != 0){
            System.out.println("SIM: INFERIOR");
        }else if(countDiagAcima == 0 && countDiagAbaixo == 0){
            System.out.println("SIM: DIAGONAL");
        }else{
            System.out.println("NAO");
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
    public static int contaDiagAbaixo(int[][] matriz){
        int i, j, countDifZero=0;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<i;j++){
                if(i != 0){
                    if(matriz[i][j] != 0){
                        countDifZero++;
                    }
                }
            }
        }return countDifZero;
    }
    public static int contaDiagAcima(int[][] matriz){
        int i, j, countDifZero=0;
        for(i=0;i<matriz.length;i++){
            for(j=i;j<matriz[0].length;j++){
                if(j != i){
                    if(matriz[i][j] != 0){
                        countDifZero++;
                    }
                }
            }
        }return countDifZero;
    }
}