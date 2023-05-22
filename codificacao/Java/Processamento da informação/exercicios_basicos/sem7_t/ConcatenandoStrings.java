import java.util.Scanner;

public class ConcatenandoStrings{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s1, s2, s;
        while(scan.hasNext()){
            s1 = scan.next();
            s2 = scan.next();
            s = s1.concat(s2);
            System.out.println(s);
        }
    }
}