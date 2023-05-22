import java.util.Scanner;

public class NotasEMedia
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float nota,soma=0,NFT;
        int i;

        for(i=1;i<11;i++){
            System.out.println("Informe a "+i+"a. nota:");
            nota=scan.nextFloat();
            soma = soma + nota;
        }NFT=soma/10;
        System.out.printf("Sua Media Final dos Trabalhos (NFT) foi %.2f\n", NFT);
    }
}