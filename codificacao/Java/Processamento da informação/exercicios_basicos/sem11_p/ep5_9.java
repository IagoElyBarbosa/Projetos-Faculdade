import java.util.Scanner;

public class ep5_9{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], l, c;
        l = scan.nextInt();
        c = scan.nextInt();
        mat = new int[l][c];

        leMatriz(mat, scan);

        if(contaMult10(mat) == l * c){
            if(verificaOrdem(mat) == l){
                System.out.println("SIM");
            }else{
                System.out.println("NAO");
            }
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
    public static int contaMult10(int[][] matriz){
        int i, j, countMult10=0;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(matriz[i][j] > 9){
                    if(matriz[i][j] % 10 == 0){
                        countMult10++;
                    }
                }
            }
        }
        return countMult10;
    }
    public static int verificaOrdem(int[][] matriz){
        int i, j, k, countDec=0, countCres=0, linhaOrdenada=0;
        for(i=0;i<matriz.length;i++){
            countDec=0;
            for(j=0;j<matriz[0].length-1;j++){
                for(k=j+1;k<j+2;k++){
                    if(matriz[i][j] <= matriz[i][k]){
                        countDec++;
                    }
                }
            }
            if(countDec == matriz[0].length - 1 ){
                linhaOrdenada++;
            }
        }
        for(i=0;i<matriz.length;i++){
            countCres=0;
            for(j=0;j<matriz[0].length-1;j++){
                for(k=j+1;k<j+2;k++){
                    if(matriz[i][j] >= matriz[i][k]){
                        countCres++;
                    }
                }
            }
            if(countCres == matriz[0].length - 1 ){
                linhaOrdenada++;
            }
        }
        return linhaOrdenada;
    }
}