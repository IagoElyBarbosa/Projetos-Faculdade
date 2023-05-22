import java.util.Scanner;

public class ep1_2{
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        float num1, num2, num3, media;
        num1 = scan.nextFloat();
        num2 = scan.nextFloat();
        num3 = scan.nextFloat();
        media = (num1 + num2 + num3)/3;

        System.out.printf("%.2f",media);
    }
}