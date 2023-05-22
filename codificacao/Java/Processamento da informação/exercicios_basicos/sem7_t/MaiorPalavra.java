import java.util.Scanner;

public class MaiorPalavra{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String palavra, maiorPalavra="";
        int maiorTamanho=0, tamanho,i=0;
        while(scan.hasNext()){
            palavra = scan.next();
            tamanho = palavra.length();
            if(tamanho > maiorTamanho){
                maiorTamanho = tamanho;
                maiorPalavra = palavra;
            }
            i++;
        }
        if(i>0){
            System.out.println("A maior palavra informada foi " + maiorPalavra);
        }
        else{
            System.out.println("Nenhuma palavra foi informada");
        }
    }
}