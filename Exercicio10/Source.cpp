/*
* Escreva um programa que receba um n�mero inteiro 
* fornecido pelo usu�rio e informe se este n�mero � primo ou n�o.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	int num, x, flag = 0, c = 0;

	printf( "Informe um n�mero inteiro positivo." );
	scanf_s( "%d", &num );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	for (x = 2; x < (num - 1); x++) {
		if (num > 0)
			if ((num % x) == 0)
				flag = 1;
	}
	if (flag)
		printf( "O n�mero nao eh primo.\n" );
	else
		printf( "O n�mero eh primo.\n" );

	system( "pause" );
	return 0;
}
