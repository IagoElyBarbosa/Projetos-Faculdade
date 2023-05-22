import java.util.Scanner;

public class ep4_9{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int vetor1[], vetor2[], n, i, verificacao=0;
        float quoPriPos, quoGeral=0;
        n = scan.nextInt();
        vetor1 = new int[n];
        vetor2 = new int[n];
        for(i=0;i<n;i++){
            vetor1[i] = scan.nextInt();
        }for(i=0;i<n;i++){
            vetor2[i] = scan.nextInt();
        }for(i=0;i<n;i++){
            quoPriPos = (float)vetor2[0] / (float)vetor1[0];
            if(i != 0){
                quoGeral = (float)vetor2[i] / (float)vetor1[i];   
            }
            if(quoPriPos == quoGeral){
                verificacao++;
            }
        }
        if(verificacao == (n - 1)){
            System.out.println("SIM");
        }else{
            System.out.println("NAO");
        }
    }
}