import java.util.Scanner;
import java.util.Arrays;

public class Tokyo2020{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n;
        String info[], numeroString;

            numeroString = scan.nextLine();
            n = Integer.parseInt(numeroString);
            info = new String[n];

            for(int i=0; i < n; i++){
                info[i] = scan.nextLine();
            }
            olimpiadas(info, n);
    }
    public static void olimpiadas(String info[], int n){
        String [][] matriz = new String[n][5];
        Arrays.sort(info);
        int auxOuro = 0, auxPrata = 0, auxBronze = 0;
        String auxNome;
        for(int i=0; i < n; i++){
            String [] infoDados = info[i].split(" ");

            for(int j=0; j < infoDados.length; j++){
                matriz[i][j] = infoDados[j];
            }
            matriz[i][4] = info[i];

        }

        for(int j=0; j < 8; j++){

            for(int i=0; i < n; i++){
                if(Integer.parseInt(matriz[i][1]) > auxOuro && matriz[i][4] != "adicionado"){

                    auxOuro = Integer.parseInt(matriz[i][1]);
                    auxPrata = Integer.parseInt(matriz[i][2]);
                    auxBronze = Integer.parseInt(matriz[i][3]);

                }else if(Integer.parseInt(matriz[i][1]) == auxOuro && matriz[i][4] != "adicionado"){

                    if(Integer.parseInt(matriz[i][2]) > auxPrata && matriz[i][4] != "adicionado"){

                        auxPrata = Integer.parseInt(matriz[i][2]);
                        auxBronze = Integer.parseInt(matriz[i][3]);

                    }else if(Integer.parseInt(matriz[i][2]) == auxPrata && matriz[i][4] != "adicionado"){

                        if(Integer.parseInt(matriz[i][3]) > auxBronze && matriz[i][4] != "adicionado"){

                            auxBronze = Integer.parseInt(matriz[i][3]);

                        }
                    }
                }
            }

            for(int i=0; i < n; i++){
                if(Integer.parseInt(matriz[i][1]) == auxOuro && Integer.parseInt(matriz[i][2]) == auxPrata && Integer.parseInt(matriz[i][3]) == auxBronze && matriz[i][4] != "adicionado"){
                    System.out.println(matriz[i][0] + " " + matriz[i][1] + " " + matriz[i][2] + " " + matriz[i][3]);
                    matriz[i][4] = "adicionado";
                }
            }
            auxOuro = 0;
            auxPrata = 0;
            auxBronze = 0;

        }
    }
}