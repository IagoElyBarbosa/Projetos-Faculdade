import java.util.Scanner;

public class BinToDec3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String binario = scan.next();
        int potencia = 0, decimal = 0, i;
        for(i = binario.length() - 1;i >= 0;i--){
            decimal += Math.pow(2, potencia) * Character.getNumericValue(binario.charAt(i));
            potencia++;
        }
        System.out.println(decimal);
    }
}