import java.util.Scanner;

public class DiaSeguinte {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);

		int d = input.nextInt();
		int m = input.nextInt();
		int a = input.nextInt();

		boolean bissexto;

		if (a % 400 == 0)
			bissexto = true;
		else if (a % 4 == 0 && a % 100 != 0)
			bissexto = true;
		else
			bissexto = false;

		if (bissexto == true && m == 2 && d == 29) {
			d = 1;
			m = 3;
		}

		else if (bissexto == false && m == 2 && d == 28) {
			d = 1;
			m = 3;
		}

		else if ((m == 4 || m == 6 || m == 9 || m == 11) && d == 30) {
			d = 1;
			m++;
		}

		else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) && d == 31) {
			d = 1;
			m++;
		}

		else if (m == 12 && d == 31) {
			d = 1;
			m = 1;
			a++;
		}

		else
			d++;

		System.out.println(d + " " + m + " " + a);

	}
}