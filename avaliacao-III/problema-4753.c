/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4753 - Vagões e mais vagões
        Link: https://www.thehuxley.com/problem/4753
*/

#include <stdio.h>

void computar_passageiros(unsigned, unsigned[]);
unsigned ocupar_vagoes(unsigned, unsigned[], unsigned);
void descrever_ocupacao_dos_vagoes(unsigned, unsigned[]);

int main()
{
    unsigned N;
    //	ler numero de vagoes no trem
    scanf("%u", &N);
    unsigned vagao[N];
    //	ler passageiros de cada vagao
    computar_passageiros(N, vagao);
    unsigned embarque;
    //	ler passageiros a embarcar
    scanf("%u", &embarque);
    embarque = ocupar_vagoes(N, vagao, embarque);
    if (embarque > 0)
    {
        printf("%u ficaram de fora.\n", embarque);
    }
    else
    {
        printf("Todos foram acomodados\n");
    }
    descrever_ocupacao_dos_vagoes(N, vagao);
    printf("\n");
    return 0;
}

void computar_passageiros(unsigned n, unsigned vagao[])
{
    if (n == 0) // nao ha mais vagoes a serem lidos
    {
        return;
    }
    //	requisitar a leitura dos anteriores
    computar_passageiros(n - 1, vagao);
    //	efetuar a leitura do "n" - esimo
    scanf("%u", &vagao[n - 1]);
}
void descrever_ocupacao_dos_vagoes(unsigned n, unsigned vagao[])
{
    if (n == 0) // nao ha mais vagoes a serem escritos
    {
        return;
    }
    //	requisitar a escrita dos anteriores
    descrever_ocupacao_dos_vagoes(n - 1, vagao);
    //	efetuar a escrita do "n" - esimo
    printf("%u ", vagao[n - 1]);
}
unsigned ocupar_vagoes(unsigned n, unsigned vagao[], unsigned embarque)
{
    if (n == 0)
    {
        return embarque;
    }
    //	computar quantas vagas estao disponiveis no vagao
    unsigned vagas = 4 - vagao[n - 1]; // 4 - (0 ... 4) = (4 ... 0)
    vagas = (embarque >= vagas) ? vagas : embarque;
    embarque -= vagas;
    vagao[n - 1] += vagas;
    //	requisitar o preenchimento do proximo vagao
    ocupar_vagoes(n - 1, vagao, embarque);
}