import java.util.Scanner;

public class ep4_3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int vetor[], n, i, contPar=0, contImpar=0;

        n = scan.nextInt();
        vetor = new int[n];

        for(i=0;i<n;i++){
            vetor[i] = scan.nextInt();
            if(vetor[i] % 2 == 0){
                contPar += 1;
            }else{
                contImpar += 1;
            }
        }

        System.out.println(contPar);
        System.out.println(contImpar);
    }
}