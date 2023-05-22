import java.util.Scanner;

public class Aluvid21{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int v[],i, n, j, vSub[], iSub=0, count=0;

        while(scan.hasNext()){
            count = 0;
            iSub = 0;
            n = scan.nextInt();
            v = new int[n];
            for(i=0;i<n;i++){
                v[i] = scan.nextInt();
            }
            for(i=0;i<n - 1;i++){
                for(j=1+i;j<n;j++){
                    count++;
                }
            }
            vSub = new int[count];
            for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){
                    vSub[iSub] = Math.abs(v[i] - v[j]);
                    iSub++;
                }
            }
            for(i=0;i<count;i++){
                System.out.print(vSub[i] + " ");
            }
            
            
            
        }
    }
}