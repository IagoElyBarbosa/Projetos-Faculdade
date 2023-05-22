import java.util.Scanner;

public class ep1_9
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        long file_gb, dif;
        float size_gib;
        
        file_gb = scan.nextLong();
        
        file_gb = file_gb * 1000000000;
        size_gib = file_gb  / (float)0.9313225746154785;
        
        long a = (long) size_gib;
        
        dif = a - file_gb;
        
        
        
        
        System.out.println(file_gb);
        System.out.println(a);
        System.out.println(dif);
    }
}