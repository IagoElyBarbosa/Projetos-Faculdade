import java.util.Scanner;

public class ep5_1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int  l, c;
        float notAluno[][], mediaAlunos;
        l = scan.nextInt();
        c = scan.nextInt();
        notAluno = new float[l][c + 1];

        leCalculaMedia(notAluno, l, c, scan);
        exibeMatriz(notAluno);
    }
    public static void leCalculaMedia(float[][] notAluno, int l, int c, Scanner scan){
        float mediAlunos, soma=0, countElementos=0;
        for(l=0;l<notAluno.length;l++){
            soma = 0;
            countElementos = 0;
            for(c=0;c<notAluno[0].length - 1;c++){
                notAluno[l][c] = scan.nextFloat();
                soma += notAluno[l][c];
                countElementos++;
                if(c == notAluno[0].length - 2){
                    mediAlunos = soma / countElementos;
                    notAluno[l][c + 1] = mediAlunos;
                }
            }
        }
    }
    public static void exibeMatriz(float[][] notAluno){
        int i, j;
        for(i=0;i<notAluno.length;i++){
            for(j=0;j<notAluno[0].length;j++){
                System.out.printf("%.2f ", notAluno[i][j]);
            }
            System.out.println();
        }
    }
}