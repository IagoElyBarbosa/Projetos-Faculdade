import java.util.Scanner;

public class Minecraft{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        char territorio[][];
        int n, m;
        n = scan.nextInt();
        m = scan.nextInt();
        territorio = new char[n][m];
        
        leMatriz(territorio, scan);
        
        System.out.println(contaCosta(territorio));
    }
    public static void leMatriz(char[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            String aux = scan.next();
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = aux.charAt(j);
            }
        }
    }
    public static int contaCosta(char[][] matriz){
        int i, j, count=0;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
               if(i == 0){
                   if(matriz[i][j] == '#'){
                       count++;
                   }
               }else if(i != 0 && j ==0){
                   if(matriz[i][j] == '#'){
                       count++;
                   }
               }else if(i != 0 && j != 0 && i == matriz.length - 1){
                   if(matriz[i][j] == '#'){
                       count++;
                   }
               }else if(i != 0 && j != 0 && i != matriz.length - 1 && j == matriz[0].length - 1){
                   if(matriz[i][j] == '#'){
                       count++;
                   }
               }else if(i != 0 && j != 0 && i != matriz.length - 1 && j != matriz[0].length - 1){
                   if(matriz[i][j] == '#' && matriz[i+1][j] == '.' || matriz[i][j] == '#' && matriz[i-1][j] == '.' || matriz[i][j] == '#' && matriz[i][j+1] == '.' || matriz[i][j] == '#' && matriz[i][j-1] == '.'){
                       count++;
                   }
               }
            }
        }return count;
    }
}