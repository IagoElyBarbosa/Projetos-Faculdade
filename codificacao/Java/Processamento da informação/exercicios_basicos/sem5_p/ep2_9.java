import java.util.Scanner;

public class ep2_9
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int cod_ori, cod_des, cod_mod, cod_pla;
        String planeta_origem = "", planeta_destino = "", modelo = "";
        
        cod_pla = scan.nextInt();
        
        cod_ori = cod_pla / 10000;
        cod_pla = cod_pla % 10000;
        cod_des = cod_pla / 100;
        cod_pla = cod_pla % 100;
        cod_mod = cod_pla;
        
        if (cod_ori == 80)
        {
            planeta_origem = "Marte";
        }
        else if (cod_ori == 81)
        {
            planeta_origem = "Saturno";
        }
        else if (cod_ori == 90)
        {
            planeta_origem = "Netuno";
        }
        else if (cod_ori == 91)
        {
            planeta_origem = "HD21749b";
        }
        
        
        if (cod_des == 80)
        {
            planeta_destino = "Marte";
        }
        else if (cod_des == 81)
        {
            planeta_destino = "Saturno";
        }
        else if (cod_des == 90)
        {
            planeta_destino = "Netuno";
        }
        else if (cod_des == 91)
        {
            planeta_destino = "HD21749b";
        }
        
        if (cod_mod == 60)
        {
            modelo = "A6000";
        }
        else if (cod_mod == 61)
        {
            modelo = "B7500";
        }
        else if (cod_mod == 62)
        {
            modelo = "C9000";
        }
        
        System.out.printf("%s\n", planeta_origem);
        System.out.printf("%s\n", planeta_destino);
        System.out.printf("%s\n", modelo);
    }
}