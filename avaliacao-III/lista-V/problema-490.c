/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 430 - Árvore de Natal
        Link: https://www.thehuxley.com/problem/430
*/

#include <stdio.h>

double preco_dos_acessorios_da_arvore();

int main() {
    double preco_da_arvore;
    const double funcionarios = 21;
    //  ler o preco bruto da arvore de natal
    scanf("%lf", &preco_da_arvore);
    //  computar o preco total da arvore de natal
    preco_da_arvore += preco_dos_acessorios_da_arvore();
    printf("%.2lf\n%.2lf\n", preco_da_arvore, preco_da_arvore / funcionarios);
    return 0;
}

double preco_dos_acessorios_da_arvore() {
    int quantidade_de_enfeites;
    double valor_do_enfeite;
    int scanf_status = scanf("%d%lf", &quantidade_de_enfeites, &valor_do_enfeite);
    if (scanf_status == EOF) {  // nao havendo mais elementos para leitura (END OF FILE)
        return 0;
    }
    return quantidade_de_enfeites * valor_do_enfeite + preco_dos_acessorios_da_arvore(scanf_status);
}