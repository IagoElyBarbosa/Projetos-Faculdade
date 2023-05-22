import java.util.*;
public class Pangrama{
  public static void main(String[] args) {
    Scanner ler = new Scanner(System.in);
    String n, pan;
    while (ler.hasNext()) {
      n = ler.nextLine();
      pan = panounao(n);
      System.out.println(pan);

    }

  }
  public static String panounao(String n) {
    int conta = 0;
    String pangra;
    char a;
    n = n.toLowerCase();
    for (a = 'a'; a <= 'z'; a++) {
      if (n.indexOf(a) != -1) {
        conta += 1;
      }

    }
    if (conta == 26) {
      pangra = "sim";
    } else {
      pangra = "nao";
    }
    return pangra;
  }
}