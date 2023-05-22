import java.util.Scanner;

public class reposicionaMenorVetor{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[], n, i, iMenor, iSegMenor, aux;
        n = scan.nextInt();
        v = new int[n];
        for(i=0;i<n;i++){
            v[i] = scan.nextInt();
        }

        iMenor = posMenor(v, n);
        iSegMenor = posSegMenor(v, n, iMenor);
        if(n != 1){
                if(iMenor == 1 && iSegMenor == 0){
                    aux = v[0];
                    v[0] = v[1];
                    v[1] = aux;
            }else{
                aux = v[iMenor];
                v[iMenor] = v[0];
                v[0] = aux;

                aux = v[iSegMenor];
                v[iSegMenor] = v[1];
                v[1] = aux;
            }
            for(i=0;i<n;i++){
                if(i != n - 1){
                    System.out.print(v[i] + " ");
                }else{
                    System.out.println(v[i]);
                }
            }
        }else{
            System.out.println(v[0]);
        }

    }
    public static int posMenor(int[] v, int n){
        int i, iMenor=0, menor = 999999;
        for(i=0;i<n;i++){
            if(v[i] < menor){
                menor = v[i];
                iMenor = i;
            }
        }
        return iMenor;
    }
    public static int posSegMenor(int[] v, int n, int iMenor){
        int i, iSegMenor=0, menor = 999999;
        for(i=0;i<n;i++){
            if(i != iMenor){
                if(v[i] < menor){
                    menor = v[i];
                    iSegMenor = i;
                }
            }
        }
        return iSegMenor;
    }
}