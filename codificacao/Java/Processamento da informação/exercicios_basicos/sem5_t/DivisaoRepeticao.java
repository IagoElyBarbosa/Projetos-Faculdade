import java.util.Scanner;

public class DivisaoRepeticao{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a,b,div=0;
        a=scan.nextInt();
        b=scan.nextInt();
        while(a>b){
            a = a - b;
            div++;
        }
        System.out.println(div);
    }
}