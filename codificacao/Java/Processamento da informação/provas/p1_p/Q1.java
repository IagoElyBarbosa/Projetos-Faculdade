import java.util.Scanner;

public class Q1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        float x, y, eficiencia, combustivel_inicio, combustivel_necessario;
        double distancia;

        x = scan.nextFloat();
        y = scan.nextFloat();
        eficiencia = scan.nextFloat();
        combustivel_inicio = scan.nextFloat();

        distancia = Math.sqrt(Math.pow(x, 2) + Math.pow(y, 2));
        combustivel_necessario = (float)distancia / eficiencia;

        System.out.printf("Distancia a percorrer : %.2f\n", distancia);
        System.out.printf("Combustivel no tanque: %.2f\n", combustivel_inicio);
        System.out.printf("Combustivel necessario: %.2f\n", combustivel_necessario);
        if(combustivel_inicio >= combustivel_necessario){
            System.out.println("Mensagem : Combustivel suficiente");
        }
        else{
            System.out.println("Mensagem : Combustivel Insuficiente");
        }
    }
}