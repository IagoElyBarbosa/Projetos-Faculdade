import java.util.Scanner;

public class Procon{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int q,i=0,lote_aprov=0;
        float x;
        do{
            q=scan.nextInt();
            if(q!=0){
                if(q>58){
                    lote_aprov+=1;
                }
                i++;
            }
        }while(q!=0);

        x = ((float)lote_aprov*100)/(float)i;

        if(x>=98.f){
            System.out.println("Lote Aprovado");
        }
        else{
            System.out.println("Lote Rejeitado");
        }
    }
}