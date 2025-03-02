/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/
    
    Problema: 274 - Média Ponderada
        Link: https://www.thehuxley.com/problem/274
*/

#include <stdio.h>

int main() {
    float a, b, c;
    //  ler notas do aluno
    scanf("%f%f%f", &a, &b, &c);
    //  imprimir media das notas
    printf("MEDIA = %.1f\n", (2. * a + 3. * b + 5. * c) / 10.);
    return 0;
}