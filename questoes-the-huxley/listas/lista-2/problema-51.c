/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 51 - Mercearia do Ambrósio
        Link: https://www.thehuxley.com/problem/51
*/

#include <stdio.h>

int main() {
    int codigo, quantidade;
    double preco;
    //  ler codigo e quantidade
    scanf("%d%d", &codigo, &quantidade);
    //  computar preco
    preco = quantidade * (
        + (codigo == 1) * 5.30
        + (codigo == 2) * 6.00
        + (codigo == 3) * 3.20
        + (codigo == 4) * 2.50
    );
    if (quantidade >= 15 || preco >= 40.)
    {
        //  conceda 15% de desconto
        preco = preco - preco * .15;
    }
    //  imprimir preco
    printf("R$ %.2lf\n", preco);
    return 0;
}