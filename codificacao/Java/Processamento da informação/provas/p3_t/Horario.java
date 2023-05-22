import java.util.Scanner;

public class Horario{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int vet1[];
        int n;
        String vet2[];
        n = scan.nextInt();
        vet1 = new int[n];
        vet2 = new String[n];
        
        leVetor(vet1, vet2, scan);
        transformaExibeVet(vet1, vet2, n);
    }
    public static void leVetor(int[] vetor, String[] vetor2, Scanner scan){
        int i;
        for(i=0;i<vetor.length;i++){
            vetor[i] = scan.nextInt();
            vetor2[i] = scan.next();
        }
    }
    public static void transformaExibeVet(int[] vetor, String[] vetor2, int n){
        int i, aux;
        String vetorFinal[]; 
        vetorFinal = new String[n];
        
        for(i=0;i<vetor.length;i++){
            if(vetor[i] == 0){
                vetorFinal[i] = "00";
            }else if(vetor[i] == 1){
                vetorFinal[i] = "01";
            }else if(vetor[i] == 2){
                vetorFinal[i] = "02";
            }else if(vetor[i] == 3){
                vetorFinal[i] = "03"; 
            }else if(vetor[i] == 4){
                vetorFinal[i] = "04"; 
            }else if(vetor[i] == 5){
                vetorFinal[i] = "05"; 
            }else if(vetor[i] == 6){
                vetorFinal[i] = "06"; 
            }else if(vetor[i] == 7){
                vetorFinal[i] = "07"; 
            }else if(vetor[i] == 8){
                vetorFinal[i] = "08"; 
            }else if(vetor[i] == 9){
                vetorFinal[i] = "09"; 
            }else if(vetor[i] == 10){
                vetorFinal[i] = "10"; 
            }else if(vetor[i] == 11){
                vetorFinal[i] = "11"; 
            }else if(vetor[i] == 12){
                vetorFinal[i] = "12"; 
            }else if(vetor[i] == 13){
                vetorFinal[i] = "01"; 
            }else if(vetor[i] == 14){
                vetorFinal[i] = "02"; 
            }else if(vetor[i] == 15){
                vetorFinal[i] = "03"; 
            }else if(vetor[i] == 16){
                vetorFinal[i] = "04"; 
            }else if(vetor[i] == 17){
                vetorFinal[i] = "05"; 
            }else if(vetor[i] == 18){
                vetorFinal[i] = "06"; 
            }else if(vetor[i] == 19){
                vetorFinal[i] = "07"; 
            }else if(vetor[i] == 20){
                vetorFinal[i] = "08"; 
            }else if(vetor[i] == 21){
                vetorFinal[i] = "09"; 
            }else if(vetor[i] == 22){
                vetorFinal[i] = "10"; 
            }else if(vetor[i] == 23){
                vetorFinal[i] = "11"; 
            }
        }
        
        for(i=0;i<vetor2.length;i++){
            aux = vetor2[i].length();
            if(aux < 2){
                if(vetor2[i].charAt(0) == '0'){
                    vetor2[i] = "00";
                }else if(vetor2[i].charAt(0) == '1'){
                    vetor2[i] = "01";
                }else if(vetor2[i].charAt(0) == '2'){
                    vetor2[i] = "02";
                }else if(vetor2[i].charAt(0) == '3'){
                    vetor2[i] = "03";
                }else if(vetor2[i].charAt(0) == '4'){
                    vetor2[i] = "04";
                }else if(vetor2[i].charAt(0) == '5'){
                    vetor2[i] = "05";
                }else if(vetor2[i].charAt(0) == '6'){
                    vetor2[i] = "06";
                }else if(vetor2[i].charAt(0) == '7'){
                    vetor2[i] = "07";
                }else if(vetor2[i].charAt(0) == '8'){
                    vetor2[i] = "08";
                }else if(vetor2[i].charAt(0) == '9'){
                    vetor2[i] = "09";
                }
            }
        }
        for(i=0;i<vetorFinal.length;i++){
            if(vetor[i] >= 12){
                System.out.println(vetorFinal[i] + ":" + vetor2[i] + " PM");
            }else{
                System.out.println(vetorFinal[i] + ":" + vetor2[i] + " AM");
            }
        }
    }
}