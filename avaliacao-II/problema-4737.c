/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4737 - O jogo da transmutação numérica
        Link: https://www.thehuxley.com/problem/4737
*/

#include <stdio.h>
#include <math.h>

//  retorna a solucao do enigma matematico
int solucao_do_enigma(int, int);
//  calcula o produto dos digitos
int produto_dos_digitos(int);

int main() {
    int n, s;
    //  ler inteiros
    scanf("%d%d", &n, &s);
    //  escreva a solucao do enigma
    printf("%d\n", solucao_do_enigma(n, s));
    return 0;
}

int solucao_do_enigma(int numeros, int solucao) {
    if (!numeros) {
        return solucao;
    }
    else {
        int x;
        scanf("%d", &x);
        if (((solucao % 2) == 0) && ((x % 2) == 0)) {
            solucao = (solucao / 2) + (x / 2);
        }
        else if (((solucao % 2) == 1) && ((x % 2) == 1)) {
            solucao = produto_dos_digitos(solucao) + produto_dos_digitos(x);
        }
        else {
            solucao = abs(solucao - x);
        }
        return solucao_do_enigma(numeros - 1, solucao);
    }
}

int produto_dos_digitos(int n) {
    int digitos_restantes = floor(log10(n));
    if (digitos_restantes < 0) {
        return 1;
    }
    else {
        int digito = n % 10;
        digito = (digito == 0) ? 1 : digito;
        return digito * produto_dos_digitos(n / 10);
    }
}