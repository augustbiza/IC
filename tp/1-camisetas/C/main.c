#include <stdio.h>

int main(void)
{
    
    int n, p, m, qtP = 0, qtM = 0;      
    scanf("%d", &n);
    
    int t[n];                           //tamanho p = 1  ||  tamanho m = 2
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &t[i]);                    //armazena os tamanhos de camisa(1 ou 2) em um vetor
        
        if(t[i] == 1) qtP++;            //contador para o número de camisas 1
        else qtM++;                     //contador para o número de camisas 2
    }
    
    scanf("%d", &p);
    scanf("%d", &m);
    
    if(qtP == p && qtM == m) printf("S");
    else printf("N");

    return 0;
}