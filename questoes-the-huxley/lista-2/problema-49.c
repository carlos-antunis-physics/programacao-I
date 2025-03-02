/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 49 - Classificação de Triângulos
        Link: https://www.thehuxley.com/problem/49
*/

#include <stdio.h>

int main() {
    double lado_1, lado_2, lado_3;
    //  ler lados do triangulo
    scanf("%lf%lf%lf", &lado_1, &lado_2, &lado_3);
    if ((lado_1 == lado_2) && (lado_2 == lado_3)) {
        //  triangulo equilatero (pela transitividade da igualdade)
        printf("equilatero\n");
        return 0;
    }
    else if ((lado_1 != lado_2) && (lado_2 != lado_3) && ((lado_3 != lado_1))) {
        //  triangulo escaleno
        printf("escaleno\n");
        return 0;
    }
    else {
        //  triangulo isosceles
        printf("isosceles\n");
        return 0;
    }
}