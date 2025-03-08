/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4004 - Música Para os Meus Ouvidos
        Link: https://www.thehuxley.com/problem/4004
*/

#include <stdio.h>

void escrever_classificacao(int primario, int secundario) {
    const int ELETRONIC = 1, INDIE = 2, ROCK = 3;
    const int HARD = 1, AMISTOSO = 2;
    //  classificar estilo musical
    if (primario == ELETRONIC) {
        if (secundario == HARD) {
            printf("Aumenta mais!\n");
            return;
        }
        else if (secundario == AMISTOSO) {
            printf("Legal\n");
            return;
        }
    }
    else if (primario == INDIE) {
        if (secundario == HARD) {
            printf("Essa eh punk\n");
            return;
        }
        else if (secundario == AMISTOSO) {
            printf("Hoje eu choro\n");
            return;
        }
    }
    else if (primario == ROCK) {
        if (secundario == HARD) {
            printf("Aumenta mais!\n");
            return;
        }
        else if (secundario == AMISTOSO) {
            printf("Legal\n");
            return;
        }
    }
}

void escrever_emoticon(double fator) {
    if (fator > 7) {
        printf("=D\n");
        return;
    }
    else if (fator > 4) {
        printf("^_^\n");
        return;
    }
    else {
        printf(":'(\n");
        return;
    }
}

int main() {
    int estilo_primario, estilo_secundario;
    double fator_musical;
    //  ler dados
    scanf("%d%d%lf", &estilo_primario, &estilo_secundario, &fator_musical);
    escrever_classificacao(estilo_primario, estilo_secundario);
    escrever_emoticon(fator_musical);
    return 0;
}
