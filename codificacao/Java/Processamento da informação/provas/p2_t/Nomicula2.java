import java.util.Scanner;

public class Nomicula2{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String n, m, nomicula2;
        int  nSize;
        while(scan.hasNext()){
            n = scan.next();
            m = scan.next();
            nSize = n.length();

            nomicula2 = juntaString(n, m, nSize);
            System.out.println(nomicula2);
        }
    }
    public static String juntaString(String n, String m, int nSize){

        String [] nArray = n.split("");
        String [] mArray = m.split("");
        String nomicula = "";
        int nCount = 0, mCount = 0;

        for(int i=0; i < (nArray.length + mArray.length); i++){
           for(int x=0; x < 2; x++){
                if(nCount < nArray.length){
                    nomicula += nArray[nCount];
                    nCount++;
                }
            }
            for(int x=0; x < 2; x++){
                if(mCount < mArray.length){
                    nomicula += mArray[mCount];
                    mCount++;
                }
            }
        }



        return nomicula;
    }
}