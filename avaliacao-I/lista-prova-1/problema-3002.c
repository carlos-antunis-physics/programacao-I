/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 3002 - Acampamento
        Link: https://www.thehuxley.com/problem/3002
*/

#include <stdio.h>
#include <stdlib.h>

/*
    funcao para testar se duas pessoas podem ocupar o mesmo quarto
*/
int compartilhar(int altura_1, int altura_2) {
    int diferenca = abs(altura_1 - altura_2);
    return (diferenca != 1);
}
/*
    funcao para obter a quantidade de quartos necessarios
*/
int quartos_necessarios(int h1, int h2, int h3, int h4, int h5) {
    /*
        o caso extremo eh quando todos se diferenciam por 1:
            tome H1, H2, H3, H4, H5 como a versao ordenada da sequencia
            sao necessarios no maximo dois quartos:
                (H3-2, H3+2, H3) (H3-1, H3+1)
        vamos tentar ocupar os quartos e caso chegue em dois quartos
        retornamos direto.
    */
    if (compartilhar(h1, h2)) {
        // (h1, h2)
        if (!compartilhar(h3, h1) || !compartilhar(h3, h2)) {
            //  precisamos alocar mais um quarto
            return 2;                       // maximo de quartos obtido
        }
        // (h1, h2, h3)
        if ((!compartilhar(h4, h1) || !compartilhar(h4, h2) || !compartilhar(h4, h3))) {
            //  precisamos alocar mais um quarto
            return 2;                       // maximo de quartos obtido
        }
        // (h1, h2, h3, h4)
        else if (!compartilhar(h5, h1) || !compartilhar(h5, h2) || !compartilhar(h5, h3) || !compartilhar(h5, h4)) {
            //  precisamos alocar mais um quarto
            return 2;                       // maximo de quartos obtido
        }
    }
    else {
        //  precisamos alocar mais um quarto
        return 2;                           // maximo de quartos obtido
    }
    return 1;                               // so eh necessario um quarto
}

int main() {
    int altura_1, altura_2, altura_3, altura_4, altura_5;
    scanf("%d%d%d%d%d", &altura_1, &altura_2, &altura_3, &altura_4, &altura_5);
    printf("%d\n", quartos_necessarios(altura_1, altura_5, altura_2, altura_4, altura_3));
    return 0;
}