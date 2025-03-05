/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 3005 - Torcedor fanático
        Link: https://www.thehuxley.com/problem/3005
*/

#include <stdio.h>

/*
    funcao para calcular o efeito dos jogadores lesionados
*/
double efeito_dos_lesionados(int lesionados, double chance_vitoria) {
    return chance_vitoria - (lesionados * 2.7);
}
/*
    funcao para calcular o efeito do publico
*/
double efeito_do_publico(int jogando_em_casa, int publico, double chance_vitoria) {
    if (jogando_em_casa)
    {
        if (publico > 40000) {
            return chance_vitoria + (0.0008 * publico);
        }
        else {
            return chance_vitoria - (0.0008 * publico);
        }
    }
    else
    {
        if (publico > 45000) {
            return chance_vitoria - (0.0003 * publico);
        }
        else {
            return chance_vitoria - (0.0001 * publico);
        }
    }
}
/*
    funcao para calcular o efeito do entrosamento dos jogadores sobre a probabilidade
    de vitoria
*/
double efeito_do_entrosamento(int jogando_em_casa, int entrosamento, double chance_vitoria) {
    if (jogando_em_casa) {
        if (entrosamento > 0) {
            return chance_vitoria + (2.7  * entrosamento);
        }
        else {
            return chance_vitoria - (1.8 * entrosamento);
        }
    }
    else {
        if (entrosamento > 0) {
            return chance_vitoria + (5.2  * entrosamento);
        }
        else {
            return chance_vitoria - (1.5 * entrosamento);
        }
    }
    
}
/*
    funcao para calcular o efeito do tempo sobre a probabilidade de vitoria
*/
double efeito_do_tempo(int jogando_em_casa, int tempo, double chance_vitoria) {
    const int SOL = 1, NEVE = 2, CHUVA = 3;
    if (jogando_em_casa) {
        //  jogando em casa
        if (tempo == SOL) {
            return chance_vitoria + 33.21;
        }
        else if (tempo == NEVE) {
            return chance_vitoria + 10.51;
        }
        else {
            return chance_vitoria - 20.7;
        }
    }
    else {
        if ((tempo == CHUVA) || (tempo == NEVE)) {
            return 0.;
        }
        else {
            return chance_vitoria - 10.87;
        }
    }
}
/*
    funcao para renormalizar a probabilidade de vitoria
*/
double renormalizar(double chance_vitoria) {
    if (chance_vitoria < 0.) {
        return 0.;
    }
    else if (chance_vitoria > 100.) {
        return 100.;
    }
    return chance_vitoria;
}

int main() {
    int jogando_em_casa, tempo, publico, lesionados, entrosamento;
    double chance_vitoria = 100.;           // chance de vitoria inicia 100%
    scanf("%d%d%d%d%d", &jogando_em_casa, &tempo, &publico, &lesionados, &entrosamento);
    //  efeito dos lesionados
    chance_vitoria = efeito_dos_lesionados(lesionados, chance_vitoria);
    //  efeito do publico
    chance_vitoria = efeito_do_publico(jogando_em_casa, publico, chance_vitoria);
    //  efeito do entrosamento
    chance_vitoria = efeito_do_entrosamento(jogando_em_casa, entrosamento, chance_vitoria);
    //  efeito do tempo
    chance_vitoria = efeito_do_tempo(jogando_em_casa, tempo, chance_vitoria);
    //  renormalizar a chance de vitoria
    chance_vitoria = renormalizar(chance_vitoria);
    //  imprimir resultado
    printf("A chance de vitoria do flamengo e de %.2lf\n", chance_vitoria);
    return 0;
}