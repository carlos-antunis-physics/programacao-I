/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 341 - Preço dos Jogos
        Link: https://www.thehuxley.com/problem/341
*/

#include <stdio.h>

double preco_em_anos(double, unsigned, unsigned);
void computar_precos(unsigned, unsigned);

int main() {
    int jogos;
    scanf("%u", &jogos);
    //  computar precos dos jogos apos 3 anos
    computar_precos(0, jogos);
    return 0;
}

void computar_precos(unsigned lidos, unsigned total) {
    if (lidos == total) {
        return;
    }
    int dificuldade;
    double preco_atual;
    scanf("%d%lf", &dificuldade, &preco_atual);
    //  escreva o preco do jogo em 3 anos
    printf("Jogo[%u] = R$%.2lf\n", lidos, preco_em_anos(preco_atual, dificuldade, 3));
    //  requisite a leitura dos proximos jogos
    computar_precos(lidos + 1, total);
}

double preco_em_anos(double preco, unsigned dificuldade, unsigned anos) {
    if (!anos) {
        return preco;
    }
    double porcentagem;
    switch (dificuldade) {
        case 0:
            porcentagem = .25;
            break;
        case 1:
            porcentagem = .20;
            break;
        case 2:
            porcentagem = .18;
            break;
        case 3:
            porcentagem = .15;
            break;
        case 4:
            porcentagem = .12;
            break;
        case 5:
            porcentagem = .10;
            break;
    }
    if (preco <= 100.) {
        porcentagem /= 2.;
        double preco_atualizado = preco * (1. - porcentagem);
        preco = (preco < 45) ? preco : ((preco_atualizado > 45) ? preco_atualizado : 45);
        return preco_em_anos(preco, dificuldade, anos - 1);
    }
    preco *= (1. - porcentagem);
    return preco_em_anos(preco, dificuldade, anos - 1);
}