import java.util.Scanner;

public class ep1_4
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        double Ax, Bx, Ay, By, dAB;
        
        Ax = scan.nextDouble();
        Ay = scan.nextDouble();
        Bx = scan.nextDouble();
        By = scan.nextDouble();
        
        dAB = Math.sqrt(Math.pow((Bx - Ax), 2) + Math.pow((By - Ay), 2));
        
        System.out.printf("%.2f\n", dAB);
    }
}