import java.util.Scanner;

public class Q2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int vet[], vetAux[], n;
        n = scan.nextInt();
        vet = new int[n];
        vetAux = new int[n];
        
        leVetor(vet, vetAux, scan);
        verificaVetor(vet, vetAux);
    }
    public static void leVetor(int[] vetor, int[] vetorAux, Scanner scan){
        int i;
        for(i=0;i<vetor.length;i++){
            vetor[i] = scan.nextInt();
            vetorAux[i] = vetor[i];
        }
    }
    public static void verificaVetor(int[] vetor, int[] vetorAux){
        int i, j, countIgual=0, numerosRepetidos2=0, vetorIndice[], indiceAux=0, indiceVetor=0;
        for(i=0;i<vetor.length;i++){
            countIgual=0;
            for(j=0;j<vetor.length;j++){
                if(vetor[i] == vetorAux[j]){
                    countIgual++;
                }
            }
            if(countIgual != 1){
                if(countIgual == 2){
                    vetorAux[i] = 1000;   
                }
            }
            
            if(countIgual == 2){
                numerosRepetidos2++;
            }
        }
        
        if(numerosRepetidos2 != 0){
            vetorIndice = new int[numerosRepetidos2];
            for(i=0;i<vetor.length;i++){
                if(vetorAux[i] == 1000){
                    indiceAux = i;
                    vetorIndice[indiceVetor] = indiceAux;
                    indiceVetor++;
                }
            }
            indiceVetor=0;
            for(i=0;i<vetorIndice.length;i++){
                System.out.print(vetor[vetorIndice[indiceVetor]] + " ");
                indiceVetor++;
            }
            
            System.out.println();
        }else{
            System.out.println("nenhum elemento ocorre 2 vezes");
        }
    }
}