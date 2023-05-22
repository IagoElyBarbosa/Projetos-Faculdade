import java.util.Scanner;

public class MDC{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a,b,i=1, MDC=1;
        a=scan.nextInt();
        b=scan.nextInt();
        if(a>b){
            while(i<b){
                i++;
                if(a%i==0 && b%i==0){
                    MDC = i;
                }
            }
        }
        else if(b>a){
            while(i<a){
                i++;
                if(a%i==0 && b%i==0){
                    MDC = i;
                }
            }
        }
        else if(a==b){
            MDC = a;
        }
        System.out.println(MDC);
    }
}