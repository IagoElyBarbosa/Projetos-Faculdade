import java.util.Scanner;

public class Cade{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int ultimaSemana[], ultimasDuasHoras[], q, e, i, cUltDuasHor=0, cIndice=0, j;
        q = scan.nextInt();
        e = scan.nextInt();
        ultimaSemana = new int[q];
        ultimasDuasHoras = new int[e];
        for(i=0;i<e;i++){
            ultimasDuasHoras[i] = scan.nextInt();
        }for(i=0;i<q;i++){
            ultimaSemana[i] = scan.nextInt();
        }
        for(i=0;i<q;i++){
            for(j=i+1;j<q;j++){
                if(ultimaSemana[i] == ultimaSemana[j]){
                    ultimaSemana[j] = 9999;
                    cIndice++;
                }
            }
        }
        
        for(i=0;i<e;i++){
            for(j=0;j<q;j++){
                if(ultimasDuasHoras[i] == ultimaSemana[j]){
                    ultimaSemana[j] = 0;
                }
            }
        }
        
        for(i=0;i<q;i++){
            if(ultimaSemana[i] == 9999){
                ultimaSemana[i] = 0;
            }else if(ultimaSemana[i] != 0 && ultimaSemana[i] != 9999){
                ultimaSemana[i] = 1;
            } 
        }
        
        for(i=0;i<q;i++){
            System.out.println(ultimaSemana[i]);
        }
    }
}