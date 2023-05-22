import java.util.Scanner;

public class Ordem{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int t, m[][];
        t = scan.nextInt();
        m = new int[t][2];

        leMatriz(m, scan);
        ordenaMatriz(m);
        exibeMatriz(m);

    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static void exibeMatriz(int[][] matriz){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(j != matriz[0].length - 1){
                    System.out.print(matriz[i][j] + " ");   
                }else{
                    System.out.println(matriz[i][j]);
                }
            }
        }
    }
    public static void ordenaMatriz(int[][] matriz){
        int i, j, k, aux, aux2;
        for(i=0;i<matriz.length-1;i++){
            for(j=i+1;j<matriz.length;j++){
                for(k=0;k<matriz[0].length;k+=2){
                    if(matriz[i][k] > matriz[j][k]){
                        aux = matriz[i][k];
                        matriz[i][k] = matriz[j][k];
                        matriz[j][k] = aux;
                        aux2 = matriz[i][k+1];
                        matriz[i][k+1] = matriz[j][k+1];
                        matriz[j][k+1] = aux2;

                    }
                }
            }
        }
    }
}