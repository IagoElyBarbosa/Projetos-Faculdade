import java.util.Scanner;

public class Carteirinha{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int m, k, mi[], ki[], i, faixasDiferentes;
        while(scan.hasNext()){
            m = scan.nextInt();
            k = scan.nextInt();
            mi = new int[m];
            ki = new int[k];
            for(i=0;i<m;i++){
                mi[i] = scan.nextInt();
            }for(i=0;i<k;i++){
                ki[i] = scan.nextInt();
            }
            
            faixasDiferentes = contadorDeFaixasDiferentes(k, ki);
            
            
            if(faixasDiferentes < m){
                System.out.println("-1");
            }else{
                System.out.println(contadorTempoEscutado(k, ki, mi));
            }
        }
    }
    public static int contadorDeFaixasDiferentes(int k, int[] ki){
        int i, j, vetorAuxiliar[], count=0, lastPosDif;
        vetorAuxiliar = new int[k];
        for(i=0;i<k;i++){
            vetorAuxiliar[i] = ki[i];
        }
        for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                if(vetorAuxiliar[i] == vetorAuxiliar[j]){
                    vetorAuxiliar[j] = 0;
                }
            }
        }
        for(i=0;i<k;i++){
            if(vetorAuxiliar[i] != 0){
                count++;
            }
        }return count;
    }
    public static int contadorTempoEscutado(int k, int[] ki, int[] mi){
        int i, vetorAuxiliar2[], lastPosDif = 0, j, soma = 0, a;
        vetorAuxiliar2 = new int[k];
        for(i=0;i<k;i++){
            vetorAuxiliar2[i] = ki[i];
        }
        for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                if(vetorAuxiliar2[i] == vetorAuxiliar2[j]){
                    vetorAuxiliar2[j] = 0;
                }
            }
        }for(i=0;i<k;i++){
            if(vetorAuxiliar2[i] != 0){
                    lastPosDif = i;
                }
            }
        for(i=0;i<=lastPosDif;i++){
            a = ki[i];
            soma += mi[a - 1];
        }
        return soma;
    }
}