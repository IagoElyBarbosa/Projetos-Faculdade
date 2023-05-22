import java.util.Scanner;

public class ep1_3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int A, B, som, sub, mult, div_int, rest_div;
        float div;
        A = scan.nextInt();
        B = scan.nextInt();
        som = A + B;
        sub = A - B;
        mult = A * B;
        div_int =  A / B;
        rest_div = A % B;
        div = (float) A / B;
        System.out.printf("Os resultados foram: \nSoma: %d;\nSubtração: %d;\nMultiplicação: %d;\nDivisão: %.1f;\nDivisão(inteiro): %d;\nDivisão(resto): %d\n", som, sub, mult, div, div_int, rest_div);
    }
}