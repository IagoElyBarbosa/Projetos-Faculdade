import java.util.Scanner;

public class SomaRepeticao{
    public static void main(String [] args){
        Scanner scan = new Scanner(System.in);
        int a,b,soma=0;
        a = scan.nextInt();
        b = scan.nextInt();
        while(a!=0){
            soma++;
            a -= 1;
        }
        while(b!=0){
            soma++;
            b -= 1;
        }
        System.out.println(soma);
    }
}