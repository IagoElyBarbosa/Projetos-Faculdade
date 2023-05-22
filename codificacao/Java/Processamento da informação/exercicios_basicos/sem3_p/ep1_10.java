import java.util.Scanner;

public class ep1_10
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int vp, fn, fp, vn;
        float acu, prec, sens;
        
        vp = scan.nextInt();
        fn = scan.nextInt();
        fp = scan.nextInt();
        vn = scan.nextInt();
        
        acu = ((float)vp + (float)vn) / ((float)vp + (float)fn + (float)fp + (float)vn);
        prec = ((float)vp) / ((float)vp + (float)fp);
        sens = ((float)vp) / ((float)vp + (float)fn);
        
        System.out.printf("%.2f\n", acu);
        System.out.printf("%.2f\n", prec);
        System.out.printf("%.2f\n", sens);
    }
}