import java.util.Scanner;

public class Prova{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int numerosLousa[], n, qtdAlunos=0, i, j, aux, aluSimu=0, metadeMaior=0, metadeMenor=0;
        while(scan.hasNext()){
            n = scan.nextInt();
            numerosLousa = new int[n];
            qtdAlunos = n / 2;
            for(i=0;i<n;i++){
                   numerosLousa[i] = scan.nextInt();
            }
            for(i=0;i<n-1;i++){
                for(j= i + 1;j<n;j++){
                    if(numerosLousa[i] > numerosLousa[j]){
                        aux = numerosLousa[i];
                        numerosLousa[i] = numerosLousa[j];
                        numerosLousa[j] = aux;
                    }
                }
            }
            for(i=0;i<n;i++){
                if(i == n/2){
                    metadeMaior = numerosLousa[i];
                }else if(i == n/2 - 1){
                    metadeMenor = numerosLousa[i];
                }
            }

            aluSimu = metadeMaior - metadeMenor;

            System.out.printf("%d %d\n", qtdAlunos, aluSimu);
        }
    }
}