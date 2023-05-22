import java.util.Scanner;

public class ComparandoStrings{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String a, b;
        int comparar;
        while(scan.hasNext()){
            a = scan.next();
            b = scan.next();
            comparar = a.compareTo(b);
            if(comparar == 0){
                System.out.println("iguais");
            }else{
                System.out.println("diferentes");
            }
        }
    }
}