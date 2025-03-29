/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 3794 - Conversor de IP
        Link: https://www.thehuxley.com/problem/3794
*/

#include <stdio.h>

int digitos_ip(int digitos, int bloco_ip) {
    if (!digitos) {
        return bloco_ip;
    }
    else {
        int digito;
        scanf("%d", &digito);
        return digitos_ip(digitos - 1, 2*bloco_ip + digito);
    }
}

int main() {
    int bloco_1, bloco_2, bloco_3, bloco_4;
    bloco_1 = digitos_ip(8, 0);
    bloco_2 = digitos_ip(8, 0);
    bloco_3 = digitos_ip(8, 0);
    bloco_4 = digitos_ip(8, 0);
    printf("%d.%d.%d.%d\n", bloco_1, bloco_2, bloco_3, bloco_4);
    return 0;
}