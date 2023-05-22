import java.util.Scanner;

public class DoisMilQuarentaOito{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][];
        mat = new int[4][4];

        leMatriz(mat, scan);
        verificaCondicao(mat);
    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
    public static void verificaCondicao(int[][] matriz){
        int i,j, count=0;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(i == 0){
                    if(j == 0){
                        if(matriz[i][j] == matriz[i+1][j]  || matriz[i][j] == matriz[i][j+1]){
                            count++;
                        }
                    }else if(j == matriz[0].length - 1){
                        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i][j-1]){
                            count++;
                        }
                    }else if(j != 0 && j != matriz[0].length - 1){
                        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i][j+1] || matriz[i][j] == matriz[i][j-1]){
                            count++;
                        }
                    }
                }else if(i == 1){
                    if(j == 0){
                        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j+1]){
                            count++;
                        }
                    }else if(j == matriz[0].length - 1){
                        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j-1]){
                            count++;
                        }
                    }else if(j != 0 && j != matriz[0].length - 1){
                        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j-1] || matriz[i][j] == matriz[i][j+1]){
                            count++;
                        }
                    }
                }else if(i == 2){
                    if(j == 0){
                        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j+1]){
                            count++;
                        }
                    }else if(j == matriz[0].length - 1){
                        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j-1]){
                            count++;
                        }
                    }else if(j != 0 && j != matriz[0].length - 1){
                        if(matriz[i][j] == matriz[i+1][j] || matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j-1] || matriz[i][j] == matriz[i][j+1]){
                            count++;
                        }
                    }
                }else if(i == 3){
                    if(j == 0){
                        if(matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j+1]){
                            count++;
                        }
                    }else if(j == matriz[0].length - 1){
                        if(matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j-1]){
                            count++;
                        }
                    }else if(j != 0 && j != matriz[0].length - 1){
                        if(matriz[i][j] == matriz[i-1][j] || matriz[i][j] == matriz[i][j+1] || matriz[i][j] == matriz[i][j-1]){
                            count++;
                        }
                    }
                }
            }
        }
        
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                if(matriz[i][j] == 0){
                    count++;
                }
            }
        }

        if(count != 0){
            System.out.println("Keep playing!");
        }else{
            System.out.println("Game over!");
        }
    }
}