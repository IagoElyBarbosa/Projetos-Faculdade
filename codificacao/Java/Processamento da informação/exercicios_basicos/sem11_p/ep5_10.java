import java.util.Scanner;

public class ep5_10{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int campoMinado[][], l, c, cmLinha, cmColuna, i, j, count=0;
        l = scan.nextInt();
        c = scan.nextInt();
        campoMinado = new int[l][c];

        leMatriz(campoMinado, scan);
        cmLinha = scan.nextInt();
        cmColuna = scan.nextInt();

        if(cmLinha != 0 && cmColuna != 0 && cmLinha != (l - 1) && cmColuna != (c - 1)){
            for(i=0;i<campoMinado.length;i++){
                for(j=0;j<campoMinado[0].length;j++){
                    if(i == cmLinha - 1){
                        if(j == cmColuna - 1 || j == cmColuna || j == cmColuna + 1){
                            if(campoMinado[i][j] == 1){
                                count++;
                            }
                        }
                    }else if(i == cmLinha){
                        if(j == cmColuna - 1  || j == cmColuna + 1){
                            if(campoMinado[i][j] == 1){
                                count++;
                            }
                        }
                    }else if(i == cmLinha + 1){
                        if(j == cmColuna - 1 || j == cmColuna || j == cmColuna + 1){
                            if(campoMinado[i][j] == 1){
                                count++;
                            }
                        }
                    }
                }
            }
        }
        if(cmLinha == 0){
            if(cmColuna == 0){
                for(i=0;i<campoMinado.length;i++){
                    for(j=0;j<campoMinado[0].length;j++){
                        if(i == cmLinha){
                            if(j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha + 1){
                            if(j == cmColuna || j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }else if(cmColuna == (c - 1)){
                for(i=0;i<campoMinado.length;i++){
                    for(j=0;j<campoMinado[0].length;j++){
                        if(i == cmLinha){
                            if(j == (c - 2)){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha + 1){
                            if(j == (c - 2) || j == (c - 1)){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }else{
                for(i=0;i<campoMinado.length;i++){
                    for(j=0;j<campoMinado[0].length;j++){
                        if(i == cmLinha){
                            if(j == cmColuna - 1  || j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha + 1){
                            if(j == cmColuna - 1 || j == cmColuna || j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
        else if(cmLinha == (l - 1)){
            if(cmColuna == 0){
                for(i=0;i<campoMinado.length;i++){
                    for(j=0;j<campoMinado[0].length;j++){
                        if(i == cmLinha){
                            if(j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha - 1){
                            if(j == cmColuna || j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }else if(cmColuna == (c - 1)){
                for(i=0;i<campoMinado.length;i++){
                    for(j=0;j<campoMinado[0].length;j++){
                        if(i == cmLinha){
                            if(j == (c - 2)){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha - 1){
                            if(j == (c - 2) || j == (c - 1)){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }else{
                for(i=0;i<campoMinado.length;i++){
                    for(j=0;j<campoMinado[0].length;j++){
                        if(i == cmLinha){
                            if(j == cmColuna - 1  || j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha - 1){
                            if(j == cmColuna - 1 || j == cmColuna || j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
        if(cmColuna == 0){
            if(cmLinha != 0 && cmLinha != (l - 1)){
                for(i=0;i<campoMinado.length;i++){
                    for(j=0;j<campoMinado[0].length;j++){
                        if(i == cmLinha - 1){
                            if(j == cmColuna || j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha){
                            if(j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha + 1){
                            if(j == cmColuna || j == cmColuna + 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }
        if(cmColuna == (c - 1)){
            if(cmLinha != 0 && cmLinha != (l - 1)){
                for(i=0;i<campoMinado.length;i++){
                    for(j=0;j<campoMinado[0].length;j++){
                        if(i == cmLinha - 1){
                            if(j == cmColuna || j == cmColuna - 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha){
                            if(j == cmColuna - 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }else if(i == cmLinha + 1){
                            if(j == cmColuna || j == cmColuna - 1){
                                if(campoMinado[i][j] == 1){
                                    count++;
                                }
                            }
                        }
                    }
                }
            }
        }

        System.out.println(count);

    }
    public static void leMatriz(int[][] matriz, Scanner scan){
        int i, j;
        for(i=0;i<matriz.length;i++){
            for(j=0;j<matriz[0].length;j++){
                matriz[i][j] = scan.nextInt();
            }
        }
    }
}