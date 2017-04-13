/*
* Fazer um programa que receba o c�digo de origem de um produto 
* e imprima a sua proced�ncia. A proced�ncia obedece a seguinte tabela:	
* C�digo de Origem		Proced�ncia
*	1					Sul
*	2					Norte
*	3					Leste
*	4					Oeste
*	5 ou 6				Sudeste
*	7, 8 ou 9			Centro-oeste
*	Todos os demais		Nordeste
*/
#include <stdlib.h>
#include <stdio.h>

void main() {
	int cod = 0;

	printf( "Informar o c�digo de Origem do Produto: " );
	scanf_s( "%d", &cod );

	switch (cod) {
		case 1: printf( "Proced�ncia : Sul\n" ); break;
		case 2: printf( "Proced�ncia : Norte\n" ); break;
		case 3: printf( "Proced�ncia : Leste\n" ); break;
		case 4: printf( "Proced�ncia : Oeste\n" ); break;
		case 5:
		case 6: printf( "Proced�ncia : Sudeste\n" ); break;
		case 7:
		case 8:
		case 9: printf( "Proced�ncia : Centro - Oeste\n" ); break;
		default: printf( "Proced�ncia : Nordeste\n" ); break;
	}
	system( "pause" );
}

