/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 789 - Esta solução do Sudoku está correta?
        Link: https://www.thehuxley.com/problem/789
*/

#include <stdio.h>
#include <stdlib.h>

unsigned **ler_sudoku();
unsigned short eh_valido(unsigned **);
void liberar_sudoku(unsigned **);

int main()
{
    unsigned N;
    unsigned **sudoku;

    //  Le o numero de matrizes de entrada
    scanf("%u", &N);
    for (unsigned i = 1; i <= N; i++)
    {
        sudoku = ler_sudoku();
        //  Verifica se a matriz é um sudoku válido
        printf("Instancia %u\n%s\n\n", i, eh_valido(sudoku) ? "SIM" : "NAO");
        liberar_sudoku(sudoku);
    }
    return 0;
}

unsigned ** ler_sudoku()
{
    //  Aloca 9 arrays de unsigned ints
    unsigned **sudoku = (unsigned **)malloc(9 * sizeof(unsigned *));
    for (unsigned i = 0; i < 9; i++)
    {
        //  Aloca 9 unsigned para cada array
        sudoku[i] = (unsigned *)malloc(9 * sizeof(unsigned));
        //  Lê os valores do sudoku
        for (unsigned j = 0; j < 9; j++)
        {
            scanf("%u", &sudoku[i][j]);
        }
    }
    return sudoku;
}

unsigned short eh_valido(unsigned **sudoku)
{
    unsigned e, elementos[9];
    //  cada linha deve conter os inteiros de 1 a 9
    for (unsigned linha = 0; linha < 9; linha++)
    {
        for (unsigned i = 0; i < 9; i++)
        {
            elementos[i] = 0;
        }
        for (unsigned i = 0; i < 9; i++)
        {
            e = sudoku[linha][i] - 1;
            elementos[e]++;
            if (elementos[e] > 1)
            {
                return 0;
            }
        }
    }
    //  cada coluna deve conter os inteiros de 1 a 9
    for (unsigned coluna = 0; coluna < 9; coluna++)
    {
        for (unsigned i = 0; i < 9; i++)
        {
            elementos[i] = 0;
        }
        for (unsigned i = 0; i < 9; i++)
        {
            e = sudoku[i][coluna] - 1;
            elementos[e]++;
            if (elementos[e] > 1)
            {
                return 0;
            }
        }
    }
    //  cada região deve conter os inteiros de 1 a 9
    for (unsigned linha = 1; linha < 9; linha += 3)
    {
        for (unsigned coluna = 1; coluna < 9; coluna += 3)
        {
            for (unsigned i = 0; i < 9; i++)
            {
                elementos[i] = 0;
            }
            for (unsigned i = -1; i <= 1; i++)
            {
                for (unsigned j = -1; j <= 1; j++)
                {
                    e = sudoku[linha + i][coluna + j] - 1;
                    elementos[e]++;
                    if (elementos[e] > 1)
                    {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}

void liberar_sudoku(unsigned **sudoku)
{
    for (unsigned i = 0; i < 9; i++)
    {
        free(sudoku[i]);
    }
    free(sudoku);
}