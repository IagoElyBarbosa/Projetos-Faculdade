import java.util.Scanner;

public class Substring{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s;
        int n;
        while(scan.hasNext()){
            s = scan.next();
            n = scan.nextInt();
            System.out.println(s.substring(n));
        }
    }
}