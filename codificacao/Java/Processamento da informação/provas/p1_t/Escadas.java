import java.util.Scanner;

public class Escadas
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int N, V = 0, V2 = 0, i = 0, Vi = 0, V3 = 0;
        
        N = scan.nextInt();
        while (N != 0)
        {
            V = scan.nextInt();
            i++;
            
            
            if (i == 1)
            {
                V2 = V;
                V3 = V;
            }
            
            if (i == 2)
            {
                if(V3 != V)
                {
                    Vi++;
                }
            }
            
            if (V2 != V)
            {
                Vi++;
            }
            
            V2 = V;
            N -= 1;
            
            if(N == 1)
            {
                V3 = V;
            }
            
            if (i == N)
            {
                if(V3 != V)
                {
                    Vi++;
                }
            }
        }
        
        System.out.println(Vi);
    }
}