#include <stdio.h>
#include <stdlib.h>

void main() {
	int x = 0 ;

	printf( "Informe o n�mero de seu candidato: " );
	scanf_s( "%d", &x );

	switch (x) {
		case 1:
			printf( "Seu voto foi computado para: Z� Carioca\n" );
			break;
		case 2:		
			printf( "Seu voto foi computado para: Ciclano Albuquerque\n");
			break;

		case 3:		
			printf( "Seu voto foi computado para: Fulano e silva\n" );
			break;
		case 4:		
			printf( "Seu voto foi computado para: Jos� Colmeia\n" );
			break;

		case 5:		
			printf( "Seu voto foi computado para: Seu Manoel do 505\n" );
			break;

		default:	
			printf( "Voto inv�lido\n" );
			break;
	}
	system( "pause" );
}
