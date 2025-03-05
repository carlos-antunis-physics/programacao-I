/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 986 - Andando no tempo
        Link: https://www.thehuxley.com/problem/986
*/

#include <stdio.h>

int main() {
    int a, b, c;
    int condicao_1, condicao_2, condicao_3;
    //  ler creditos
    scanf("%d%d%d", &a, &b, &c);
    //  computar condicao de retorno ao presente
    /*
        para que seja possivel retornar ao presente, ao menos uma das
        condicoes deve ser satisfeita:
        1. algum credito eh 0
        2. ha dois creditos iguais
        3. a subtracao de dois dos creditos resulta no outro (em abs)
    */
    condicao_1 = (a == 0) || (b == 0) || (c == 0);
    condicao_2 = (a == b) || (b == c) || (c == a);
    condicao_3 = (fabs(a - b) == c) || (fabs(b - c) == a) || (fabs(c - b) == a);
    if (condicao_1 || condicao_2 || condicao_3) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }
    return 0;
}