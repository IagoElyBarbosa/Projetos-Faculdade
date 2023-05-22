import java.util.Scanner;

public class ep5_3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int mat[][], l, c, i, j, aux, count=1;
        l = scan.nextInt();
        c = scan.nextInt();
        mat = new int[l][c];
        for(i=0;i<l;i++){
            if(i % 2 == 0){
                for(j=0;j<c;j++){
                    mat[i][j] = count;
                    count++;
                }
            }else if(i % 2 != 0){
                aux = c;
                for(j=0;j<c;j++){
                    mat[i][aux - 1] = count;
                    count++;
                    aux--;
                }
            }
        }

        for(l=0;l<mat.length;l++){
            for(c=0;c<mat[0].length;c++){
                System.out.print(mat[l][c] + " ");
            }
            System.out.println();
        }
    }
}