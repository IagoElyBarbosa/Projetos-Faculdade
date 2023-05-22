import java.util.Scanner;

public class NomeMatricula{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String n, nomeMatricula;
        while(scan.hasNext()){
            n = scan.next();
            nomeMatricula = separaString(n);
            System.out.println(nomeMatricula);
        }
    }
    public static String separaString(String n){

        String nome = n.replaceAll("[^a-zA-Z]+", "");
        String matricula = n.replaceAll("[^0-9]+", "");
    
        String nomicula = nome + " " + matricula;
        return nomicula;
    }
}