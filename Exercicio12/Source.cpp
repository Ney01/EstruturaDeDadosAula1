/*
* A convers�o de graus Farenheit para cent�grados � obtida por c = ((f-32)*5)/9. 
* Fa�a um programa que calcule e imprima uma tabela de graus Cent�grados e graus Farenheit, 
* que variem de 50 a 65 de 1 em 1 grau.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	float x;
	printf( "Cent�grados - Farenheit" );

	for (x = 50; x <= 65; x++)
		printf( "%0.2f - %0.2f \n ", ((x - 32)*5)/9, x );

	system( "pause" );
}

