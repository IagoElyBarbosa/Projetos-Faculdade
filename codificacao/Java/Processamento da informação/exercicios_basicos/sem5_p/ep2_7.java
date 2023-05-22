import java.util.Scanner;

public class ep2_7
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int a,b,c;
        
        a = scan.nextInt();
        b = scan.nextInt();
        c = scan.nextInt();
        
        if(a <= b && a <= c)
        {
            if(b < c)
            {
                System.out.println(a);
                System.out.println(b);
                System.out.println(c);
            }
            else if (a == b)
            {
                System.out.println(a);
                System.out.println(b);
                System.out.println(c);
            }
            else if (a == c)
            {
                System.out.println(a);
                System.out.println(c);
                System.out.println(b);
            }
            else
            {
                System.out.println(a);
                System.out.println(c);
                System.out.println(b);
            }
        }
        else if(b <= a && b <= c)
        {
            if(a < c)
            {
                System.out.println(b);
                System.out.println(a);
                System.out.println(c);
            }
            else if(b == a)
            {
                System.out.println(b);
                System.out.println(a);
                System.out.println(c);
            }
            else if (b == c)
            {
                System.out.println(b);
                System.out.println(c);
                System.out.println(a);
            }
            else
            {
                System.out.println(b);
                System.out.println(c);
                System.out.println(a);
            }
        }
        else
        {
            if(a < b)
            {
                System.out.println(c);
                System.out.println(a);
                System.out.println(b);
            }
            else if (c == a)
            {
                System.out.println(c);
                System.out.println(a);
                System.out.println(b);
            }
            else if (c == b)
            {
                System.out.println(c);
                System.out.println(b);
                System.out.println(c);
            }
            else
            {
                System.out.println(c);
                System.out.println(b);
                System.out.println(a);
            }
        }
    }
}