/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 1524 - Aumento condicional
        Link: https://www.thehuxley.com/problem/1524
*/

#include <stdio.h>

int main() {

    double salario;
    int taxa_de_aumento;
    //  ler salario atual
    scanf("%lf", &salario);
    //  computar a taxa de aumento
    /*
        taxa de aumento eh de 20%, mas se:
            salario > 280: taxa de aumento = 20% - 5% = 15%
            salario >= 700: taxa de aumento = 20% - 5% - 5% = 10%
            salario >= 1500: taxa de aumento = 20% - 5% - 5% - 5% = 5%
    */
    taxa_de_aumento = 20 - 5 * (salario > 280.) - 5 * (salario >= 700.) - 5 * (salario >= 1500.);
    //  imprimir salario original
    printf("%.2lf\n", salario);
    //  imprimir percentual aplicado
    printf("%d\n", taxa_de_aumento);
    //  imprimir aumento salarial
    printf("%.2lf\n", salario * taxa_de_aumento / 100.);
    //  imprimir salario atualizado
    printf("%.2lf\n", salario * (1. + taxa_de_aumento / 100.));
    return 0;
}