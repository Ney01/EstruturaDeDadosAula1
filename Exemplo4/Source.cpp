#include <stdio.h>
#include <stdlib.h>

void main() {
	int x = 0;
	char op = ' ', c=' ';

	printf( "Informe sua idade: " );
	scanf_s( "%d", &x );
	//sempre que usar o scanf/scanf_s mais de uma vez limpe o buffer de teclado
	while ((c = getchar()) != '\n' && c != EOF) {}
	printf( "Digite s se for votar nas pr�ximas elei��es\n ou qualquer outro caractere para n�o votar:" );
	scanf_s( "%c", &op );
	while ((c = getchar()) != '\n' && c != EOF) {}

	if ((op == 's') || (op == 'S')){
		if (x > 15){
			printf( "Voc� j� pode votar" );
			if( x >= 18 ){
				printf( "Voc� j� pode ser candidato nas elei��es.\n" );
				if( x > 64 ) {
					printf( "Voc� esta liberado da obrigatoriedade de votar.\n" );
				}
			}
		} else
		{
			printf( "Voc� n�o tem idade para participar das elei��es.\n" );
		}
	}
	printf( "Obrigado\n" );
	system( "pause" );
}

