/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4730 - Aim, a Guardiã do Parque
        Link: https://www.thehuxley.com/problem/4730
*/

#include <stdio.h>

double area(double L, double H, char shape) {
    switch (shape)
    {
        case 't':
            return L * H / 2.;
            break;
        case 'r':
            return L * H;
            break;
        case 'c':
            return 3.14 * L * L;
            break;
    }
}

int main()
{
    double racao, sono;
    double largura, altura;
    char formato;
    char clima;
    double impacto_do_clima;
    double tempo_dia_anterior;
    double disposicao;
    double tempo_de_patrulha;
    double area_de_patrulha;

    scanf("%lf%lf", &racao, &sono);
    scanf("%lf%lf %c", &largura, &altura, &formato);
    scanf(" %c%lf", &clima, &impacto_do_clima);
    scanf("%lf", &tempo_dia_anterior);
    
    disposicao = racao * (sono / 60.);
    
    if (tempo_dia_anterior > 6.)
    {
        disposicao *= 1.00 - .20;
    }

    area_de_patrulha = area(largura, altura, formato);
    if (area_de_patrulha > 500.)
    {
        disposicao *= 1.00 - .15;
    }
    
    switch (clima)
    {
        case 'c':
        disposicao -= (impacto_do_clima * .30) * disposicao / 100.;
        break;
        case 's':
        disposicao += (impacto_do_clima * .47) * disposicao / 100.;
        break;
        case 'n':
        disposicao -= (impacto_do_clima * .67) * disposicao / 100.;
        break;
    }
    
    tempo_de_patrulha = disposicao / area_de_patrulha;
    
    if (tempo_de_patrulha < 1.)
    {
        tempo_de_patrulha = 1.;
    }
    
    printf("Aim trabalhou %.2lf horas e recebeu: %.2lf Reais\n", tempo_de_patrulha, tempo_de_patrulha * 70.);

    return 0;
}
