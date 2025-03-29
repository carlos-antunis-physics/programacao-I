/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1250 - Batalha Pokemon
        Link: https://www.thehuxley.com/problem/1250
*/

#include <stdio.h>
#include <math.h>

void batalhar(int, int, int, int);
void ler_pokemons(int);

int main() {
    int batalhas;
    scanf("%d", &batalhas);
    ler_pokemons(batalhas);
	return 0;
}

void ler_pokemons(int batalhas) {
    if (!batalhas) {
        return;
    } else {
        int v1, v2, d1, d2;
        scanf("%d%d%d%d", &v1, &v2, &d1, &d2);
        //  imprimir resultado da batalha
        batalhar(v1, v2, d1, d2);
        //  requerer os proximos pokemons para batalha
        ler_pokemons(batalhas - 1);
    }
}
void batalhar(int v1, int v2, int d1, int d2) {
    //  turno de clodes
    double turnos_clodes = ((double)v2 / (double)d1);
    double turnos_bezaliel = ((double)v1 / (double)d2);
    if (ceil(turnos_clodes) <= ceil(turnos_bezaliel)) {
        v2 -= d1;
    } else {
        d1 += 50;
    }
    if (v2 <= 0) {
        printf("Clodes\n");
        return;
    }
    //  turno de bezaliel
    v1 -= d2;
    if (v1 <= 0) {
        printf("Bezaliel\n");
        return;
    }
    batalhar(v1,v2,d1,d2);
}