import java.util.Scanner;

public class encontraMenor{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], vAux[], n, i=0;
        n = scan.nextInt();
        v = new int[n];
        vAux = new int[n];
        
        leVetor(v, vAux, scan, i);
        encontraFrequencia(v, vAux, i);
        separaMenor(v, vAux, i);
        exibeVetor(v, vAux, i);
        
        
    }
    public static void leVetor(int[] vetor, int[] vetorAuxiliar, Scanner scan, int i){
        for(i=0;i<vetor.length;i++){
            vetor[i] = scan.nextInt();
            vetorAuxiliar[i] = vetor[i];
        }
    }
    public static void exibeVetor(int[] vetor, int[] vetorAuxiliar, int i){
        for(i=0;i<vetor.length;i++){
            if(vetor[i] != 1000){
                System.out.print(vetor[i] + " ");   
            }
        }
        
        System.out.println();
    }
    public static void encontraFrequencia(int[] vetor, int[] vetorAuxiliar, int i){
        int j, count=0;
        for(i=0;i<vetor.length;i++){
            count=0;
            for(j=0;j<vetor.length;j++){
                if(vetorAuxiliar[i] == vetor[j]){
                    count++;
                }
            }
            vetorAuxiliar[i] = count;
        }
    }
    public static void separaMenor(int[] vetor, int[] vetorAuxiliar, int i){
        int j, aux;
        for(i=0;i<vetor.length;i++){
            if(vetorAuxiliar[i] != 1){
                vetor[i] = 1000;
            }
        }
        
        for(i=0;i<vetor.length-1;i++){
            for(j=i+1;j<vetor.length;j++){
                if(vetor[i] >= vetor[j]){
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }
    }
}

/* 
Este programa só funciona no caso de que a menor incidência ocorra apenas 1 vez.
Penso que seria mais fácil só colocar qualquer número naqueles que repetem, e de-
pois organizar todo o vetor. Aqui eu gastei tempo demais fazendo algo que poderia
ser enxuto. Não sei como fazer esse algoritmo pegar a menor incidência mesmo daqueles
que aparecem N vezes.
*/
