/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4736 - Oileh no espaço
        Link: https://www.thehuxley.com/problem/4736
*/

#include <stdio.h>
#include <math.h>

//  le todas as mensagens e as processa
void ler_e_decodificar(int);
//  soma os digitos de um int base
int soma_dos_digitos(int);
//  inverte a mensagem informada
void decodificar_mensagem(int);

int main() {
    int msg_totais;
    //  obter a quantidade total de mensagens
    scanf("%d", &msg_totais);
    //  requisitar a leitura da dada quantidade de
    //  mensagens
    ler_e_decodificar(msg_totais);
    return 0;
}

void ler_e_decodificar(int msg_restantes) {
    if (msg_restantes != 0) {
        int n;
        //  obter o numero que informa a quantidade
        //  de caracteres na mensagem
        scanf("%d", &n);
        //  computar a mensagem
        decodificar_mensagem(soma_dos_digitos(n));
        //  requisitar a leitura das proximas mensagens
        ler_e_decodificar(msg_restantes - 1);
    }
}
int soma_dos_digitos(int n) {
    int digitos_restantes = floor(log10(n));
    if (digitos_restantes < 0) {
        return 0;
    }
    else {
        int digito = n % 10;
        return digito + soma_dos_digitos(n / 10);
    }
}
void decodificar_mensagem(int caracteres_restantes) {
    char letra;
    if (caracteres_restantes == 0) {
        printf("\n");
    }
    else {
        scanf(" %c", &letra);
        decodificar_mensagem(caracteres_restantes - 1);
        printf("%c", letra);
    }
}