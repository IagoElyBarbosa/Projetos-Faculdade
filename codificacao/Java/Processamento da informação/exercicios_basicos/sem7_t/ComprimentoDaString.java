import java.util.Scanner;

public class ComprimentoDaString{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s;
        while(scan.hasNext()){
            s = scan.next();
            System.out.println(s.length());
        }
    }
}