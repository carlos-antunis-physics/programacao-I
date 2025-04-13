/*
    Autor: Carlos Antunis Bonfim da Silva Santos
        Github: https://github.com/carlos-antunis-physics/

    Problema: 4746 - Guerreiro Oileh: A Torre da Dragoa Vermelha
        Link: https://www.thehuxley.com/problem/4746
*/

#include <stdio.h>

int resgatar_sylvie(int, int, int [], int []);
void batalhar(int [], int []);

int main()
{
	int vida[2] = {}, ataque[2] = {};
	int andares;

	//	ler vida e ataque de oileh
	scanf("%d%d", &vida[0], &ataque[0]);
	scanf("%d", &andares);

	//	adentre o castelo da dragoa vermelha
	int sucesso = resgatar_sylvie(1, andares, vida, ataque);

	//	imprima se oileh obteve sucesso em seu resgate
	printf("%s\n", (sucesso) ? "Vamos para casa!" : "Eu voltarei!");

	return 0;
}

int resgatar_sylvie(int andar, int andares, int vida[], int ataque[])
{
	if (andar > andares) {	//	percorrendo todos os andares
		printf("%d %d\n", (vida[0] > 0) ? vida[0] : 0, ataque[0]);
		return (vida[0] > 0);	//	oileh resgata sylvie se sua vida for maior que zero
	}
	//	ler vida e ataque inimigo
	scanf("%d%d", &vida[1], &ataque[1]);
	//	efetuar a batalha
	batalhar(vida, ataque);
	//	efetuar bonus de andar
	if (!(andar % 5) && (vida[0] > 0))
	{
		vida[0] += 20;
	}
	if (!(andar % 10) && (vida[0] > 0))
	{
		ataque[0] += 5;
	}
	return resgatar_sylvie(andar + 1, andares, vida, ataque);
}

void batalhar(int vida[], int dano[])
{
	//	oileh ataca primeiro
	vida[1] -= dano[0];
	if (vida[1] <= 0)				// caso venca finalizar a batalha
	{
		return;
	}
	//	o inimigo revida
	vida[0] -= dano[1];
	if (vida[0] <= 0)				// caso venca finalizar a batalha
	{
		return;
	}
	//	caso ninguem venca batalhe por mais um turno
	batalhar(vida, dano);
}