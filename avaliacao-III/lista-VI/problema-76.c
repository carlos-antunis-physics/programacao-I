/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 76 - Correção de Provas
        Link: https://www.thehuxley.com/problem/76
*/

#include <stdio.h>

double nota(char [], char [], unsigned);
void set_zero(unsigned [], unsigned);
double nota_mais_frequente(unsigned [], unsigned, unsigned, unsigned);
void computar_rendimento_da_sala(char [], unsigned [], double, double);

int main()
{
    char gabarito[10];
    unsigned frequencia_de_notas[11];
    scanf("%s", &gabarito);
    set_zero(frequencia_de_notas, 11);
    computar_rendimento_da_sala(gabarito, frequencia_de_notas, 0., 0.);
    return 0;
}

double nota(char gabarito[], char resposta[], unsigned questao)
{
    return (questao == 0) ? 0 : ((resposta[questao - 1] == gabarito[questao - 1]) + nota(gabarito, resposta, questao - 1));
}

void set_zero(unsigned array[], unsigned n)
{
    if (!n)                         //  caso de parada
    {
        return;
    }
    //  requisitar a definicao do valor como false até
    //  o elemento anterior
    set_zero(array, n - 1);
    //  armazenar 0 do n-esimo elemento
    array[n - 1] = 0;
}

double nota_mais_frequente(unsigned freq[], unsigned n, unsigned N, unsigned moda)
{
    if (n > N)                         //  caso de parada
    {
        return (double) moda;
    }
    moda = (freq[n] > freq[moda]) ? n : moda;
    return nota_mais_frequente(freq, n + 1, N, moda);
}

void computar_rendimento_da_sala(char gabarito[], unsigned frequencia[], double alunos, double aprovados)
{
    unsigned aluno;
    //  ler numero do aluno
    scanf("%u", &aluno);
    if (aluno == 9999)                  //  caso de parada
    {
        printf("%.1lf%%\n", (aprovados / alunos) * 100.);
        printf("%.1lf\n", nota_mais_frequente(frequencia, 0, 10, 0));
        return;
    }
    printf("%u ", aluno);
    //  ler a resposta fornecida pelo aluno
    char resposta[10];
    scanf("%s", &resposta);
    //  computar nota do aluno
    double nota_atual = nota(gabarito, resposta, 10);
    printf("%.1lf\n", nota_atual);
    //  adicionar um na frequencia de notas
    frequencia[(unsigned)nota_atual] += 1;
    //  requisitar a computação do rendimento do proximo aluno
    computar_rendimento_da_sala(gabarito, frequencia, alunos + 1., aprovados + (nota_atual >= 6.));
}