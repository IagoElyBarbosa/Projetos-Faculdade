import java.util.Scanner;

public class Q2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n, soma_impar = 0, i = 0, menor_impar = 100;
        float media_impar;

        do{
            n = scan.nextInt();
            if(n != -1){
                if(n<0){
                    System.out.printf("n=%d\n", n);
                    System.out.println("Somente positivos!");
                }
                else if(n>=0){
                    if(n % 2 == 0){
                        System.out.printf("n=%d\n", n);
                    }
                    else if(n % 2 != 0){
                        System.out.printf("n=%d\n", n);
                        soma_impar += n;
                        i++;
                        if(menor_impar > n){
                            menor_impar = n;
                        }
                    }
                }
            }
            if(n == -1){
                System.out.println("n=-1");
            }

        }while(n != -1);
        media_impar = (float)soma_impar / (float)i;

        System.out.printf("media de %d numeros impares = %.2f\n", i, media_impar);
        System.out.printf("menor impar = %d\n", menor_impar);
    }
}