import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    
	    Scanner scan = new Scanner(System.in);
	    
	    char partidas[] = new char[6];
        int v = 0;       //v = vitorias
    
        for(int i = 0; i < 6; i++) {
            partidas[i] = scan.next().charAt(0);
            
            if(partidas[i] == 'v' || partidas[i] == 'V') v++;
        }
    
        if(v > 4) System.out.println("3");
        else if(v > 2 && v <= 4) System.out.println("2");
        else if(v > 0 && v <= 2) System.out.println("1");
        else System.out.println("-1");

	    
	    scan.close();
		
	}
}
