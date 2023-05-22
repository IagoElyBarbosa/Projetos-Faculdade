import java.util.Scanner;

public class MultiplicacaoRepeticao{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a,b,mult=0;
        a=scan.nextInt();
        b=scan.nextInt();
        while(b!=0){
            mult = mult + a;
            b-=1;
        }
        System.out.println(mult);
    }
}