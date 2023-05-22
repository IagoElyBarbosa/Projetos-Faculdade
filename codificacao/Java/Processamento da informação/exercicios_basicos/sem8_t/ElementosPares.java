import java.util.Scanner;

public class ElementosPares{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i, quantPar=0, numPar[];
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
            if(v[i] % 2 == 0){
                quantPar++;
                System.out.println(quantPar);
            }
        }
        numPar = new int[quantPar];
        for(i=0;i<quantPar;i++){
            if(v[i] % 2 == 0){
                numPar[i] = v[i];
            }
        }
        for(i=0;i<quantPar;i++){
            if(i != (quantPar - 1)){
                System.out.print(numPar[i] + " ");
            }else{
                System.out.println(numPar[i]);
            }
        }
    }
}