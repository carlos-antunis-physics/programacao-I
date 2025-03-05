/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 279 - Salário
        Link: https://www.thehuxley.com/problem/279
*/

#include <stdio.h>

int main() {
    int numero;
    int horas_trabalhadas;
    float salario_por_hora;
    //  ler valores
    scanf("%d%d%f", &numero, &horas_trabalhadas, &salario_por_hora);
    //  escrever resultados
    printf("NUMBER = %d\nSALARY = R$ %.2f\n", numero, horas_trabalhadas * salario_por_hora);
    return 0;
}