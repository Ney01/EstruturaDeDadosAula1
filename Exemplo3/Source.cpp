#include <stdio.h>
#include <stdlib.h>

void main() {
	int x=0;

	printf( "Informe sua idade: " );
	scanf_s( "%d", &x );

	if (x > 15){
		printf( "Voc� j� pode votar\n" );
		printf( "Caso ainda n�o possua t�tulo procure o TRE.\n" );
	}else{
		printf( "Voc� n�o tem idade para participar das elei��es.\n" );
	}
	printf( "Obrigado\n" );
	system( "pause" );
}

