/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 564 - Devagar, devagar, olhe o radar!!
        Link: https://www.thehuxley.com/problem/564
*/

#include <stdio.h>

int main()
{
    double velocidade_maxima, velocidade_veiculo;
    double porcentagem;
    int pontos_na_carteira;
    double multa;
    //  ler velocidade maxima e velocidade do veiculo
    scanf("%lf%lf", &velocidade_maxima, &velocidade_veiculo);
    //  calcular a razao entre a velocidade do veiculo e a velocidade maxima
    porcentagem = (velocidade_veiculo / velocidade_maxima) - 1.;
    //  computar pontos na carteira
    pontos_na_carteira =
        0
        + (porcentagem > .0) * 4    // excedendo o limite adicione 4 pontos
        + (porcentagem > .2) * 1    // excedendo 20%, adicione mais 1 ponto  (= 5)
        + (porcentagem > .5) * 2;   // excedendo 50%, adicione mais 2 pontos (= 7)
    //  computar multa
    multa =
        0.
        + (porcentagem > .0) * 85.13                // excedendo o limite adicione 85.13
        + (porcentagem > .2) * (127.69 - 85.13)     // excedendo 20%, a multa aumenta para 127.69
        + (porcentagem > .5) * (574.62 - 127.69);   // excedendo 50%, a multa aumenta para 574.62
    //  imprimir pontos na carteira e multa
    printf("%.2lf\n%d\n", multa, pontos_na_carteira);
    return 0;
}