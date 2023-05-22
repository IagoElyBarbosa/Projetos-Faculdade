import java.util.Scanner;

public class Triangulo5{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        float a1, a2, a3, soma_angulo;
        int i = 0;
        do{
            a1 = scan.nextFloat();
            a2 = scan.nextFloat();
            a3 = scan.nextFloat();
            soma_angulo = a1 + a2 + a3;
            i++;
        }while(soma_angulo != 180.f);
        System.out.println("Os angulos " + a1 + ", " + a2 + " e " + a3 + " formam um triangulo.");
        System.out.println("Foram necessarias " + i + " tentativa para formar um triangulo.");
    }
}