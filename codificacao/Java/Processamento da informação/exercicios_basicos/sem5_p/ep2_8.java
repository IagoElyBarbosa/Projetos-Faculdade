import java.util.Scanner;

public class ep2_8
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        float x, y;
        
        x = scan.nextFloat();
        y = scan.nextFloat();
        
        if (x >= -800.f && x <= 22.f && y >= -20.f && y <= 35.f)
        {
            System.out.println("SIM");
        }
        else
        {
            System.out.println("NAO");
        }
    }
}