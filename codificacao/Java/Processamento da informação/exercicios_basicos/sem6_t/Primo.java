import java.util.Scanner;

public class Primo{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int k,i=1;
        k = scan.nextInt();
        if(k==1){
            System.out.println("COMPOSTO");
        }
        else if(k==2){
            System.out.println("PRIMO");
        }
        else if(k==3){
            System.out.println("PRIMO");
        }
        else if(k==5){
            System.out.println("PRIMO");
        }
        else{
                if(k%2 == 0 || k%3 == 0 || k%5 == 0){
                    System.out.println("COMPOSTO");
                }
                else{
                    System.out.println("PRIMO");
                }
            }
    }
}