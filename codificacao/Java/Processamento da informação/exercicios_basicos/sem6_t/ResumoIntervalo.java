import java.util.Scanner;

public class ResumoIntervalo{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a, b, a2, b2, i=0, soma=0, i2=0;
        float media;
        a = scan.nextInt();
        b = scan.nextInt();
        a2 = a;
        b2 = b;
        while(a2<=b2){
            if(a2 != b2){
                System.out.printf("%d ", a2);
            }
            else
            {
                System.out.println(a2);
            }
            if(a2%7==0){
                i++;
            }
            soma = soma + a2;
            a2++;
            i2++;
        }
        media = (float)soma / (float)i2;
        System.out.println("entre " + a + " e " + b + " existe(m) " + i + " numero(s) divisiveis por 7.");
        System.out.printf("a media aritmetica simples de todos os valores entre %d e %d eh %.2f.\n", a, b, media);
    }
}