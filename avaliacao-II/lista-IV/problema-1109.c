/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1109 - Programador Dedicado
        Link: https://www.thehuxley.com/problem/1109
*/

#include <stdio.h>

void ler_dias(int, int, int, int, int);
void imprimir_desempenho(int, int, int);

int main() {
    // ler 7 dias assumindo, a priori, 0 dias cumprindo a meta de programas e de
    // linhas (com 0 linhas de codigo produzidas no dia mais produtivo, o qual �
    // o dia 1 - DOMINGO)
    ler_dias(7, 0, 0, 0, 1);
	return 0;
}

void ler_dias(int dias, int dias_meta_prog, int dias_meta_lin, int linhas_max, int mais_produtivo) {
    if (!dias) {
        // ao fim da semana, imprimir o desempenho do programador
        imprimir_desempenho(dias_meta_prog, dias_meta_lin, mais_produtivo);
        return;
    } else {
        int programas, linhas;
        // ler a quantidade de programas e linhas no dia
        scanf("%d%d", &programas, &linhas);
        // aumentar dias que cumprem a meta de programas
        dias_meta_prog += (programas >= 5);
        // aumentar dias que cumprem a meta de linhas
        dias_meta_lin += (linhas >= 100);
        // computar o dia mais produtivo
        if (linhas >= linhas_max) {
            mais_produtivo = (7 - dias) + 1;
            linhas_max = linhas;
        }
        // requisitar a leitura dos proximos dias
        ler_dias(dias - 1, dias_meta_prog, dias_meta_lin, linhas_max, mais_produtivo);
    }
}

void imprimir_desempenho(int dias_meta_prog, int dias_meta_lin, int mais_produtivo) {
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE PROGRAMAS: %d\n", dias_meta_prog);
    printf("QUANTIDADE DE DIAS QUE ATINGIU MEDIA DE LINHAS: %d\n", dias_meta_lin);
    switch (mais_produtivo) {
        case 1:
            printf("DIA QUE MAIS PRODUZIU: DOMINGO\n");
            break;
        case 2:
            printf("DIA QUE MAIS PRODUZIU: SEGUNDA\n");
            break;
        case 3:
            printf("DIA QUE MAIS PRODUZIU: TERCA\n");
            break;
        case 4:
            printf("DIA QUE MAIS PRODUZIU: QUARTA\n");
            break;
        case 5:
            printf("DIA QUE MAIS PRODUZIU: QUINTA\n");
            break;
        case 6:
            printf("DIA QUE MAIS PRODUZIU: SEXTA\n");
            break;
        case 7:
            printf("DIA QUE MAIS PRODUZIU: SABADO\n");
            break;
    }
    return;
}