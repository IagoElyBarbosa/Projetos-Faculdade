import java.util.Scanner;

public class ep4_7{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i, i2, metade, countS=0;
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
        }
        metade = n/2;
        int vetorAux1[], vetorAux2[];
        vetorAux1 = new int[metade];
        vetorAux2 = new int[metade];
        for(i=0;i<metade;i++){
            vetorAux1[i] = v[i];
        }
        i2 = i;
        i = 0;
        if(n % 2 == 0){
            for(i2 = i2;i2<n;i2++){
                vetorAux2[i] = v[i2];
                i++;
            }
        }else if(n % 2 != 0){
            for(i2 = i2 + 1;i2<n;i2++){
                vetorAux2[i] = v[i2];
                i++;
            }
        }

        ordenaVetor(vetorAux1, metade);
        ordenaVetor(vetorAux2, metade);

        for(i=0;i<metade;i++){
            if(vetorAux1[i] == vetorAux2[i]){
                countS++;
            }
        }
        if(countS == metade){
            System.out.println("SIM");
        }else if(countS != metade){
            System.out.println("NAO");
        }
    }

    public static void ordenaVetor(int[] vetorOrdenado, int n){
        int i, j, aux;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(vetorOrdenado[j] > vetorOrdenado[j+1]){
                    aux = vetorOrdenado[j];
                    vetorOrdenado[j] = vetorOrdenado[j+1];
                    vetorOrdenado[j+1] = aux;
                }
            }
        }
    }
}