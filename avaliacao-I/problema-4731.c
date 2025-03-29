/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4731 - Fazenda de Oileh
        Link: https://www.thehuxley.com/problem/4731
*/

#include <stdio.h>

int main()
{
    double area_da_plantacao;
    char fase_da_lua;
    double area_da_fazenda;
    double agua;
    int temperatura;
    
    double eficiencia = 1.;
    double agua_necessaria;
    double area_resultado;

    scanf("%lf %c%lf%lf%d", &area_da_plantacao, &fase_da_lua, &area_da_fazenda, &agua, &temperatura);

    switch (fase_da_lua)
    {
        case 'C':
            eficiencia *= 1. + .50;
            break;
        case 'F':
            eficiencia *= 1. + .20;
            break;
        default:
            eficiencia *= 1. - .10;
            break;
    }

    agua_necessaria = 2. * area_da_fazenda;
    if (agua >= agua_necessaria)
    {
        eficiencia *= 1. + .30;
    }
    else
    {
        eficiencia *= 1. - .25;
    }
    
    if (temperatura < 10.)
    {
        eficiencia *= 1. - .15;
    }
    else if (temperatura > 25.)
    {
        eficiencia *= 1. + .25;
    }

    area_resultado = eficiencia * area_da_plantacao;

    printf("%.2lf\n", area_resultado);
    if (area_resultado > area_da_fazenda)
    {
        printf("Oh nao, a fazenda cresceu demais!\n");
    }

    return 0;
}