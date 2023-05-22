import java.util.Scanner;

public class CaractereNaPosicao{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String a;
        int n;
        while(scan.hasNext()){
            a = scan.next();
            n = scan.nextInt();
            System.out.println(a.charAt(n));
        }
    }
}