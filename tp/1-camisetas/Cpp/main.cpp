#include <iostream>
using namespace std;

int main(void)
{
    
    int n, p, m, qtP = 0, qtM = 0;
          
    cin >> n;
    
    int t[n];                           //tamanho p = 1  ||  tamanho m = 2
    
    for(int i = 0; i < n; i++) {
        cin >> t[i];                    //armazena os tamanhos de camisa(1 ou 2) em um vetor
        
        if(t[i] == 1) qtP++;            //contador para o número de camisas 1
        else qtM++;                     //contador para o número de camisas 2
    }
    
    cin >> p >> m;
    
    if(qtP == p && qtM == m) cout << "S";
    else cout << "N";

    return 0;
}