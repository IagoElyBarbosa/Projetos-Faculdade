import java.util.Scanner;

public class compactaVetor{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i, contaRepetidos=0, vCompactado[], sizeCompacVet, j=0, count=0;
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
        }

        compactaVetor(v, n);

        for(i=0;i<n;i++){
            if(v[i] == 1000){
                contaRepetidos++;
            }else if(v[i] > 1000){
                count++;
            }
        }

        sizeCompacVet = n - contaRepetidos - count;
        vCompactado = new int[sizeCompacVet];

        for(i=0;i<n;i++){
            if(v[i] < 1000){
                vCompactado[j] = v[i];
                j++;
            }
        }

        for(i=0;i<sizeCompacVet;i++){
            if(i != sizeCompacVet - 1){
                System.out.print(vCompactado[i] + " ");
            }else{
                System.out.println(vCompactado[i]);
            }
        }
        if(contaRepetidos == 0){
            System.out.println("nenhum numero se repete");
        }else if(contaRepetidos == 1){
            System.out.println("1 numero se repete");
        }else{
            System.out.println(contaRepetidos + " numeros se repetem");
        }

    }
    public static void compactaVetor(int[] v, int n){
        int i, j, count=0;
        for(i=0;i<n;i++){
            count = 0;
            for(j= i + 1;j<n;j++){
                if(v[i] == v[j]){
                    if(v[j] != 1000){
                        v[j] = 1000 + count;
                        count++;
                    }
                }
            }
        }
    }
}