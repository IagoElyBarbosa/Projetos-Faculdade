import java.util.Scanner;
import java.util.Arrays;

public class Participacao{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String participacao[], nomes[];
        char atencao[];
        int n, i, cAtentos=0, cDistraidos=0, iChar=0, iNomes=0;
        n = scan.nextInt();
        participacao = new String[n * 2];
        atencao = new char[n];
        nomes = new String[n];
        for(i=0;i<participacao.length;i++){
            participacao[i] = scan.next();
        }

        for(i=0;i<participacao.length;i++){
            if(i % 2 == 0){
                atencao[iChar] = participacao[i].charAt(0);
                iChar++;
            }
        }
        for(i=0;i<participacao.length;i++){
            if(i % 2 != 0){
                nomes[iNomes] = participacao[i];
                iNomes++;
            }
        }
        for(i=0;i<n;i++){
            if(atencao[i] == '+'){
                cAtentos++;
            }else{
                cDistraidos++;
            }
        }

        Arrays.sort(nomes);

        for(i=0;i<n;i++){
            System.out.println(nomes[i]);
        }
        System.out.println("atentos: " + cAtentos + " distraidos: " + cDistraidos);
    }
}