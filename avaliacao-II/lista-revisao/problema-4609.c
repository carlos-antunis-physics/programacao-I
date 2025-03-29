/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4609 - Uma calculadora diferente
        Link: https://www.thehuxley.com/problem/4609
*/

#include <stdio.h>

double operar(int, double);

int main() {
    int n;
    double valor;
    scanf("%d%lf", &n, &valor);
    printf("Valor final: %.2lf\n", operar(n, valor));
	return 0;
}

double operar(int n, double valor) {
    if (n == 0) {
        return valor;
    }
    else {
        char operacao;
        double operando;
        scanf(" %c%lf", &operacao, &operando);
        switch (operacao) {
            case 'A':
                valor += operando;
                break;
            case 'S':
                valor -= operando;
                break;
            case 'M':
                valor *= operando;
                break;
            case 'D':
                valor /= operando;
                break;
            case 'C':
                valor = operando;
                break;
        }
        operar(n - 1, valor);
    }
}