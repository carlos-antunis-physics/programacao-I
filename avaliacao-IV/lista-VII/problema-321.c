/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 321 - Frutas
        Link: https://www.thehuxley.com/problem/321
*/

#include <stdio.h>

void computar_compras(unsigned);

int main()
{
    unsigned dias;
    scanf("%u", &dias);
    computar_compras(dias);
    return 0;
}

void computar_compras(unsigned dias)
{
    double preco_total = 0., total_de_frutas = 0.;
    char fruta[100], char_final = ' ';
    double preco;
    unsigned frutas;
    for (unsigned dia = 0; dia < dias; dia++, frutas = 0u, char_final = ' ')
    {
        scanf("%lf", &preco);
        preco_total += preco;
        while (scanf("%s%c ", &fruta, &char_final) != EOF)
        {
            frutas++;
            if (char_final == '\n')
            {
                break;
            }
        }
        printf("dia %u: %u kg\n", dia + 1, frutas);
        total_de_frutas += frutas;
    }
    printf("%.2lf kg por dia\n", total_de_frutas / dias);
    printf("R$ %.2lf por dia\n", preco_total / dias);
}