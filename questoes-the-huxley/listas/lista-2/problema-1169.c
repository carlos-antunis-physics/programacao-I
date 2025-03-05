/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1169 - Choque Elétrico
        Link: https://www.thehuxley.com/problem/1169
*/

#include <stdio.h>

int main() {
    int level;
    //  ler level do voltorb
    scanf("%d", &level);
    //  computar potencia do choque eletrico
    if (level <= 20)
    {
        printf("Potencia de : %d W\n", 20 + level * level * level);
    }
    else if (level <= 40)
    {
        printf("Potencia de : %d W\n", 8000 + (level - 10) * (level - 10));
    }
    else if (level <= 60)
    {
        printf("Potencia de : %d W\n", 9000 + 5 * level);
    }
    else if (level <= 80)
    {
        printf("Potencia de : %d W\n", 9300 + 2 * level);
    }
    else
    {
        printf("Potencia de : %d W\n", 9500 + level);
    }
    return 0;
}