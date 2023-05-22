import java.util.Scanner;

public class Mundial
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int J, P, V, E, D, e_v, v_sistema, e_sistema;

        J = scan.nextInt();
        P = scan.nextInt();
        V = scan.nextInt();
        E = scan.nextInt();
        D = scan.nextInt();

        if (J == -1 && E == -1)
        {
            E = (P * 1) - (V * 3);
            J = V + E + D;
        }
        if (J == -1 && V == -1)
        {
            V = (P - E) / 3;
            J = V + E + D;
        }
        if(P == -1 && V == -1)
        {
            V = J - E - D;
            P = (V * 3) + E;
        }
        if (P == -1 && E == -1)
        {
            E = J - V - D;
            P = (V * 3) + E;
        }
        if (E == -1 && D == -1)
        {
            E = P - (V * 3);
        }

        if(D == -1 && V == -1)
        {
            V = (P - E) / 3;
            D = J - V - E;
        }
        if(V == -1 && E == -1)
        {
            e_v = J - D;
            v_sistema = (P - e_v) / 2;
            e_sistema = e_v - v_sistema;
            V = v_sistema;
            E = e_sistema;
        }
        if (J == -1)
        {
            J = V + E + D;
        }
        if (P == -1)
        {
            P = (V * 3) + E;
        }
        if (V == -1)
        {
            V = J - E - D;
        }
        if (E == -1)
        {
            E = J - V - D;
        }
        if (D == -1)
        {
            D = J - V - E;
        }
        System.out.printf("%d %d %d %d %d\n", J, P, V, E, D);
    }
}