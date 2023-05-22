import java.util.Scanner;

public class ep2_10
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        double carga, ax, ay, bx, by, autonomia;
        
        carga = scan.nextFloat();
        ax = scan.nextFloat();
        ay = scan.nextFloat();
        bx = scan.nextFloat();
        by = scan.nextFloat();
        autonomia = Math.sqrt(Math.pow((bx - ax), 2) + Math.pow((by - ay), 2));
        
        if (carga <= 50000.f)
        {
            if (autonomia < 16200.f)
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("SIM");
            }
            else if (autonomia >= 16200.f && autonomia <= 19800.f)
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("TALVEZ");
            }
            else
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("NAO");
            }
        }
        
        else if (carga >= 50001 && carga <= 200000)
        {
            if (autonomia < 8100.f)
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("SIM");
            }
            else if (autonomia >= 8100.f && autonomia <= 9900.f)
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("TALVEZ");
            }
            else
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("NAO");
            }
        }
        
        else if (carga >= 200001 && carga <= 250000)
        {
            if (autonomia < 2700.f)
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("SIM");
            }
            else if (autonomia >= 2700.f && autonomia <= 3300.f)
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("TALVEZ");
            }
            else
            {
                System.out.printf("%.2f\n", autonomia);
                System.out.println("NAO");
            }
        }
    }
}