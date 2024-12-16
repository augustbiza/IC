#include <iostream>
using namespace std;

int main(void) {

    char *partidas = new char[6];
    int v = 0;       //v = vitorias

    for(int i = 0; i < 6; i++) {
        cin >> partidas[i];
        
        if(partidas[i] == 'v' || partidas[i] == 'V') v++;
    }

    if(v > 4) cout << "3\n";
    else if(v > 2 && v <= 4) cout << "2\n";
    else if(v > 0 && v <= 2) cout << "1\n";
    else cout << "-1\n";

    return 0;
}