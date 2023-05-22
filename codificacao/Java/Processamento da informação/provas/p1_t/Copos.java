import java.util.Scanner;
public class Copos
{
    public static void main(String[] args) {
	Scanner in = new Scanner(System.in);
	int N = in.nextInt();  
	String P = in.next();  
	for (int i=0; i<N; i++) {
	    int M = in.nextInt();  
	    if (M == 1) {
		if (P.equals("A")) P = "B";
		else if (P.equals("B")) P = "A";
	    }
	    else if (M == 2) {
		if (P.equals("B")) P = "C";
		else if (P.equals("C")) P = "B";
	    }
	    else {
		if (P.equals("A")) P = "C";
		else if (P.equals("C")) P = "A";
	    }
	}
	System.out.println(P);
    }
}