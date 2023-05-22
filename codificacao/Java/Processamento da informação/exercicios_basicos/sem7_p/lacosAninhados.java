import java.util.Scanner;

public class lacosAninhados{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n, aux, aux2, i2=0, maiorNum=0, quantDig, soma=0, unidade, i;
        String size;
        do{
            n = scan.nextInt();
            aux = n;
            aux2 = n;
            if(n>maiorNum){
                maiorNum = n;
            }
            size = Integer.toString(n);
            quantDig = size.length();
            for(i=0;i<=quantDig;i++){
                unidade = aux % 10;
                aux /= 10;
                soma += unidade;
            }
        }while(n!=0);
        System.out.println(maiorNum);
        primeFactors(maiorNum);
        System.out.printf("\n%d\n", soma);
    }
    public static void primeFactors(int n)
    {
        while (n % 2 == 0) {
            System.out.println(2);
            n /= 2;
        }
        for (int i = 3; i <= Math.sqrt(n); i += 2) {
            while (n % i == 0) {
                System.out.println(i);
                n /= i;
            }
        }
        if (n > 2)
            System.out.print(n);
    }
}