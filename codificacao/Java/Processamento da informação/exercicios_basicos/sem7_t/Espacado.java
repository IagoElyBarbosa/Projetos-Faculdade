import java.util.Scanner;

public class Espacado{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s;
        char letra;
        int i, n;
        while(scan.hasNext()){
            s = scan.next();
            n = s.length();
            for(i=0;i<n;i++){
                letra = s.charAt(i);
                if(i<n - 1){
                    System.out.print(letra + " ");
                }
                else if(i<n){
                    System.out.println(letra);
                }
            }
        }
    }
}