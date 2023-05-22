import java.util.Scanner;

public class Inverso{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String s;
        int tamanho, i;
        char letra;
        while(scan.hasNext()){
            s = scan.next();
            tamanho = s.length();
            while(tamanho != 0){
                letra = s.charAt(tamanho - 1);
                if(tamanho != 1){
                    System.out.print(letra);
                }else if(tamanho == 1){
                    System.out.println(letra);
                }



                tamanho -= 1;
            }
        }
    }
}