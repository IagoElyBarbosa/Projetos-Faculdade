import java.util.Scanner;

public class SubtracaoRepeticao{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a,b,sub=0;
        a = scan.nextInt();
        b = scan.nextInt();
        if(a<b){
            while(a<b){
                sub++;
                a+=1;
            }
        }
        else if(b<a){
            while(b<a){
                sub++;
                b+=1;
            }
        }
        else{
            System.out.println(sub);
        }
        System.out.println(sub);
    }
}