import java.util.Scanner;

public class Escadinha {
    public static void main(String[] args) {
        int N, i, Dis, Di;
        Scanner entrada = new Scanner(System.in);

        Di = 0;
        N = entrada.nextInt();

        if (N == 1) {
            Dis = entrada.nextInt();
            System.out.println("S");
        } else {
            for (i = 0; i < N; i = i + 1) {
                Dis = entrada.nextInt();

                if (i == 0) {
                    Di = Dis;
                } else if (Dis - Di == 1) {
                    Di = Dis;
                    if (i == N - 1) {
                        System.out.println("S");
                    }
                } else {
                    System.out.println("N");
                    break;
                }
            }
        }
    }
}