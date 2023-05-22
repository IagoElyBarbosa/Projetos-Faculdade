import java.util.Scanner;

public class Atletas{
    public static void main(String[] args){
        int idades[], i, qtdMasc=0, qtdFem=0, qtdMascAcimaAlt=0, qtdFemAbaixoPeso=0;
        float alturas[], pesos[], somaAltMasc=0.f, somaPesoFem=0.f, mediaAltMasc, mediaPesoFem;
        char generos[];
        Scanner scan = new Scanner(System.in);
        idades = new int[100];
        alturas = new float[100];
        pesos = new float[100];
        generos = new char[100];
        for(i=0; i<100; i++){
            idades[i] = scan.nextInt();
            alturas[i] = scan.nextFloat();
            pesos[i] = scan.nextFloat();
            generos[i] = scan.next().charAt(0);
            if(generos[i] == 'M'){
                somaAltMasc = somaAltMasc + alturas[i];
                qtdMasc++;
            }
            else{
                somaPesoFem = somaPesoFem + pesos[i];
                qtdFem++;
            }
        }
        for(i=0; i<100; i++){
            if(qtdMasc != 0 && alturas[i] > (somaAltMasc/qtdMasc) && generos[i] == 'M'){
                qtdMascAcimaAlt++;
            }
            if(qtdFem != 0 && pesos[i] < (somaPesoFem/qtdFem) && generos[i] == 'F'){
                qtdFemAbaixoPeso++;
            }
        }
        if(qtdMasc != 0){
            System.out.println("Ha " + qtdMascAcimaAlt + " atletas homens acima da media da altura dos homens.");
        }
        else{
            System.out.println("Nao houve entrada de atletas homens.");
        }
        if(qtdFem != 0){
            System.out.println("Ha " + qtdFemAbaixoPeso + " atletas mulheres abaixo da media do peso das mulheres.");
        }
        else{
            System.out.println("Nao houve entrada de atletas mulheres.");
        }
    }
}