/*
* Escreva um programa que pergunte ao usu�rio com qual velocidade ele costuma 
* dirigir seu carro e imprima a resposta que o guarda de tr�nsito daria 
* conforme as seguintes poss�veis velocidades: 
* > 110 km/h; 
* > 80 km/h; 
* > 40 Km/h; 
* < 40 km/h. 
* utilizar comandos if else aninhados
*/
#include <stdlib.h>
#include <stdio.h>

int main() {
	int vel = 0, c = 0;

	printf( "Com qual velocidade voc� costuma dirigir seu carro?" );
	scanf_s( "%d", &vel );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	if (vel > 110)
		printf( "Voc� trafega em velocidade muito alta para uma via p�blica.\n" );
	else
		if (vel > 80)
			printf( "Cuidado, n�o existe vias r�pidas para esta velocidade na cidade.\n" );
		else
			if (vel >  40)
				printf( "Muito bem voc� esta dentro dos limites para vias p�blicas.\n" );
			else
				printf( "voc� � muito lento.\n" );
	system( "pause" );
}
