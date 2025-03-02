/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1532 - Preço da Gasolina
        Link: https://www.thehuxley.com/problem/1532
*/

#include <stdio.h>

double preco_alcool(double litros)
{
    double preco_base = 1.9;
    return preco_base * litros * (
        .97         // 3% de desconto base por litro
        //  se ultrapassar 20 litros, adicione um desconto de 2%
        - (litros > 20) * .02
    );
}
double preco_gasolina(double litros)
{
    double preco_base = 2.5;
    return preco_base * litros * (
        .96         // 4% de desconto base por litro
        //  se ultrapassar 20 litros, adicione um desconto de 2%
        - (litros > 20) * .02
    );
}
double preco_diesel(double litros)
{
    double preco_base = 1.66;
    return preco_base * litros * (
        1.          // 0% de desconto base por litro
        //  se ultrapassar 25 litros, adicione um desconto de 4%
        - (litros > 25) * .04
    );
}

int main()
{
    double litros;
    char combustivel;
    double preco;
    //  ler combustivel
    scanf("%lf\n%c", &litros, &combustivel);
    //  computar preco do combustivel
    preco = 0.
        + (combustivel == 'A') * preco_alcool(litros)
        + (combustivel == 'G') * preco_gasolina(litros)
        + (combustivel == 'D') * preco_diesel(litros);
    //  imprimir preco do combustivel
    printf("R$ %.2lf\n", preco);
    return 0;
}