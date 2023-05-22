import java.util.Scanner;

public class Nomicula{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String n, m, strFin;
        char a, b;
        int nSize, mSize, strIniSize, i, count=0;
        while(scan.hasNext()){
            count = 0;
            n = scan.next();
            m = scan.next();
            nSize = n.length();
            mSize = m.length();

            if(nSize < mSize){
                strIniSize = nSize;
            }
            else if(nSize > mSize){
                strIniSize = mSize;
            }else{
                strIniSize = mSize;
            }
            for(i=0;i<strIniSize;i++){
                a = n.charAt(i);
                b = m.charAt(i);
                if(nSize != mSize){
                    System.out.printf("%c%c", a, b);
                }else{
                    if(i != strIniSize - 1){
                        System.out.printf("%c%c", a, b);
                    }else{
                        System.out.printf("%c%c\n", a, b);
                    }
                }

                count++;
            }
            if(nSize != mSize){
                if(nSize > mSize){
                    strFin = n.substring(count, nSize);
                    System.out.println(strFin);
                }else{
                    strFin = m.substring(count, mSize);
                    System.out.println(strFin);
                }
            }

        }
    }
}

