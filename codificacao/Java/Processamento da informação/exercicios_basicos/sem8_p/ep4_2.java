import java.util.Scanner;

public class ep4_2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int vetor[], n, i, soma=0;
        float media;
        String nomes[];

        n = scan.nextInt();

        vetor = new int[n];
        nomes = new String[n];

        for(i=0;i<n;i++){
            nomes[i] = scan.next();
            vetor[i] = scan.nextInt();
            soma += vetor[i];
        }

        media = (float)soma / (float)n;

        for(i=0;i<n;i++){
            if(vetor[i] > media){
                System.out.println(nomes[i]);
            }
        }
    }
}