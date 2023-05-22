import java.util.Scanner;

public class Nomicula3{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String n, m, nomicula2;
        String v;
        while(scan.hasNext()){
            n = scan.next();
            m = scan.next();
            v = scan.next();

            nomicula2 = juntaString(n, m, Integer.parseInt(v));
            System.out.println(nomicula2);
        }
    }
    public static String juntaString(String n, String m, int v){
        
        String [] nArray = n.split("");
        String [] mArray = m.split("");
        String nomicula = "";
        int nCount = 0, mCount = 0; 
        
        for(int i=0; i < (nArray.length + mArray.length); i++){
           for(int x=0; x < v; x++){
                if(nCount < nArray.length){
                    nomicula += nArray[nCount];
                    nCount++;
                }
            }
            for(int x=0; x < v; x++){
                if(mCount < mArray.length){
                    nomicula += mArray[mCount];
                    mCount++;
                }   
            }
        }
       
     
       
        return nomicula;
    }
}