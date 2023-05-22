import java.util.Scanner;

public class NumerosParesAB{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a,b;
        String pularLinha="";
        a = scan.nextInt();
        b = scan.nextInt();
        while(a<b){

            if(a != b - 1){
                    if(a%2==0){
                    System.out.printf("%d ", a);
                }
            }
            else{
                if(a%2==0){
                    System.out.printf("%d", a);
                }
            }
            a+=1;
        }
        if(a%2==0){
            System.out.println(a);
        }
        else{
            System.out.println(pularLinha);
        }
    }
}