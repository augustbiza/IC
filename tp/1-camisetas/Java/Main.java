import java.util.Scanner;

class Main {

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);

        int n, p, m, qtP = 0, qtM = 0;

        n = scan.nextInt();

        int []t = new int[n];                           //tamanho p = 1  ||  tamanho m = 2
    
        for(int i = 0; i < n; i++) {
            t[i] = scan.nextInt();          //armazena os tamanhos de camisa(1 ou 2) em um vetor
        
            if(t[i] == 1) qtP++;            //contador para o número de camisas 1
            else qtM++;                     //contador para o número de camisas 2
        }
    
        p = scan.nextInt();
        m = scan.nextInt();
    
        if(qtP == p && qtM == m) System.out.println("S");
        else System.out.println("N"); 

        scan.close();
    }
}