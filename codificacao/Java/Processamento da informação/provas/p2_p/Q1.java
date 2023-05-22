import java.util.Scanner;

public class Q1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int vet[], vetAux[], i, j, n, countIgual=0, menor = 99999, crava=0;
        n = scan.nextInt();
        vet = new int[n];
        vetAux = new int[n];
        
        for(i=0;i<vet.length;i++){
            vet[i] = scan.nextInt();
        }
        for(i=0;i<vet.length;i++){
            vetAux[i] = vet[i];
        }
        
        for(i=0;i<vet.length - 1;i++){
            for(j= i + 1;j<vet.length;j++){
                if(vet[i] == vet[j]){
                    vet[i] = 9999;
                    vet[j] = 9999;
                }
            }
        }
        
        for(i=0;i<vet.length;i++){
            if(vet[i] != 9999){
                System.out.print(vet[i] + " ");
            }
        }System.out.println();
    }
}