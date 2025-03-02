/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 174 - Conta de Água
        Link: https://www.thehuxley.com/problem/174
*/

#include <stdio.h>

int main()
{
    int consumo;
    int valor_da_conta;
    //  ler consumo
    scanf("%d", &consumo);
    //  computar valor da conta
    //  faixa de preco de 0 - 10 m^3
    valor_da_conta = 7;                 // valor fixo de 7 reais
    //  faixa de preco de 11 - 30 m^3
    consumo -= 10;                      // descontar 10 m^3
    consumo = (consumo > 0) * consumo;  // zerar se o consumo for negativo
    valor_da_conta +=
        //  se o consumo for menor que 20, adicionar 1.40 por m^3
        (consumo < 20) * consumo
        //  se o consumo for maior que 20 nao superfaturar
        + (consumo >= 20) * 20;
    //  faixa de preco de 31 - 100 m^3
    consumo -= 20;                      // descontar 20 m^3
    consumo = (consumo > 0) * consumo;  // zerar se o consumo for negativo
    valor_da_conta += 2 * (
        //  se o consumo for menor que 70, adicionar 1.40 por m^3
        (consumo < 70) * consumo
        //  se o consumo for maior que 70 nao superfaturar
        + (consumo >= 70) * 70
    );
    //  faixa de preco de 101 m^3 ou mais
    consumo -= 70;                      // descontar 70 m^3
    consumo = (consumo > 0) * consumo;  // zerar se o consumo for negativo
    valor_da_conta += 5 * consumo;
    //  imprimir valor da conta
    printf("%d\n", valor_da_conta);
    return 0;
}