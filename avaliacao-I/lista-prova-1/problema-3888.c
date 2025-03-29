/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 3888 - Em busca dos trintão
        Link: https://www.thehuxley.com/problem/3888
*/

#include <stdio.h>
#include <math.h>

int valido(double palpite) {
    return (palpite > 0.) && (palpite < 100.);
}
double media(double Arthur, double Pedro, double Tulio, double Will) {
    return (Arthur + Pedro + Tulio + Will) / 4.;
}
char vencedor(double Arthur, double Pedro, double Tulio, double Will) {
    const double m = media(Arthur, Pedro, Tulio, Will);
    char vencedor;
    double menor_diferenca;
    int ocorrencias;
    //  computar diferenca da media de cada jogador
    Arthur = fabs(Arthur - m);
    Pedro = fabs(Pedro - m);
    Tulio = fabs(Tulio - m);
    Will = fabs(Will - m);
    //  computar o vencedor, obtendo a menor distancia para a media
    menor_diferenca = Arthur;
    vencedor = 'a';
    ocorrencias = 1;
    if (Pedro <= menor_diferenca) {
        if (Pedro == menor_diferenca) {
            ocorrencias++;
        }
        else {
            menor_diferenca = Pedro;
            vencedor = 'p';
            ocorrencias = 1;
        }
    }
    if (Tulio <= menor_diferenca) {
        if (Tulio == menor_diferenca) {
            ocorrencias++;
        }
        else {
            menor_diferenca = Tulio;
            vencedor = 't';
            ocorrencias = 1;
        }
    }
    if (Will <= menor_diferenca) {
        if (Will == menor_diferenca) {
            ocorrencias++;
        }
        else {
            menor_diferenca = Will;
            vencedor = 'w';
            ocorrencias = 1;
        }
    }
    if (ocorrencias != 1) {
        return 'x';
    }
    else {
        return vencedor;
    }
}
double pontuacao(char vencedor_atual, char vencedor_passado, int pts_vencedor) {
    //  calcular acrescimo na pontuacao do vencedor
    if (pts_vencedor > 80) {
        return 10. + pts_vencedor;
    }
    else if (pts_vencedor > 60) {
        return 10. + pts_vencedor * .8;
    }
    else if (pts_vencedor > 40) {
        return 10. + pts_vencedor * .6;
    }
    else if (pts_vencedor > 20) {
        return 10. + pts_vencedor * .4;
    }
    else {
        return 10. + pts_vencedor * .2;
    }
}
void escrever_vencedor(char vencedor_atual, char vencedor_passado, int pts_Arthur, int pts_Pedro, int pts_Tulio, int pts_Will) {
    int pts_vencedor;
    switch (vencedor_atual) {           // utilizando switch apenas por legibilidade
        case 'a':
            printf("Arthur ");
            pts_vencedor = pts_Arthur;
            break;
        case 'p':
            printf("Pedro ");
            pts_vencedor = pts_Pedro;
            break;
        case 't':
            printf("Túlio ");
            pts_vencedor = pts_Tulio;
            break;
        case 'w':
            printf("Will ");
            pts_vencedor = pts_Will;
            break;
    }
    if (vencedor_atual == vencedor_passado) {
        printf("venceu outra vez!\n");
        printf("Pontuação: +%.2lf\n", pontuacao(vencedor_atual, vencedor_passado, pts_vencedor));
    }
    else {
        printf("venceu!\n");
        printf("Pontuação: +10\n");
    }
    return;
}
double regularidade(double Arthur, double Pedro, double Tulio, double Will) {
    const double m = media(Arthur, Pedro, Tulio, Will);
    return sqrt(pow(Arthur - m, 2.) + pow(Pedro - m, 2.) + pow(Tulio - m, 2.) + pow(Will - m, 2.));
}

int main() {
    int pts_Arthur, pts_Pedro, pts_Tulio, pts_Will;
    double Arthur, Pedro, Tulio, Will;
    char vencedor_passado;
    char vencedor_atual;
    //  ler dados de entrada
    scanf("%d%d%d%d", &pts_Arthur, &pts_Pedro, &pts_Tulio, &pts_Will);
    scanf("%lf%lf%lf%lf", &Arthur, &Pedro, &Tulio, &Will);
    scanf("\n%c", &vencedor_passado);
    if (!valido(Arthur) || !valido(Pedro) || !valido(Tulio) || !valido(Will)) {
        printf("Números inválidos!\nPróxima rodada.\n");
        return 0;
    }
    //  computar o atual vencedor
    vencedor_atual = vencedor(Arthur, Pedro, Tulio, Will);
    if (vencedor_atual == 'x') {
        printf("Não foi possível determinar um vencedor :/\nPróxima rodada.\n");
        return 0;
    }
    //  escrever na tela o vencedor atual
    escrever_vencedor(vencedor_atual, vencedor_passado, pts_Arthur, pts_Pedro, pts_Tulio, pts_Will);
    if (regularidade(Arthur, Pedro, Tulio, Will) <= 10.) {
        printf("Houve regularidade na rodada!\nTodos ganharam +10 pontos\n");
    }
    return 0;
}
