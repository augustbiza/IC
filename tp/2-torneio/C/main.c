#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char *partidas = (char*)malloc(sizeof(char) * 6);
    int v = 0;       //v = vitorias

    for(int i = 0; i < 6; i++) {
        scanf(" %c", &partidas[i]);
        
        if(partidas[i] == 'v' || partidas[i] == 'V') v++;
    }

    if(v > 4) printf("3\n");
    else if(v > 2 && v <= 4) printf("2\n");
    else if(v > 0 && v <= 2) printf("1\n");
    else printf("-1\n");

    return 0;
}