import java.util.Scanner;

public class RestoDivisaoRepeticao{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a,b;

        a=scan.nextInt();
        b=scan.nextInt();
        while(a>b){
            a = a - b;
        }
        System.out.println(a);
    }
}