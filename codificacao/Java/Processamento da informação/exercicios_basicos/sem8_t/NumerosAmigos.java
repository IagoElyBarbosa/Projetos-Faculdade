import java.util.Scanner;

public class NumerosAmigos{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n1, n2;
        while(scan.hasNext()){
            n1 = scan.nextInt();
            n2 = scan.nextInt();
            if(n1 == divProp(n2) && n2 == divProp(n1)){
                System.out.println("amigos");
            }else{
                System.out.println("nao amigos");
            }
        }
    }
    public static int divProp(int n){
        int soma=0, i=1;
        while(i<n){
            if(n % i == 0){
                soma += i;
            }i++;
        }
        return soma;
    }
}