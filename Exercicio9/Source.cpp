/*
* Escreva um programa que receba um conjunto de valores inteiros e positivos, 
* calcule e imprima o maior e o menor valor do conjunto. 
* Para encerrar a entrada de dados, deve ser digitado o valor zero. 
* Para valores negativos, deve ser desconsiderado e informado ao usu�rio.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	int num, maior = 0, menor = 0, c = 0;

	printf( "Informe um n�mero inteiro positivo." );
	scanf_s( "%d", &num );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	menor = num;
	do
	{
		system( "cls" );
		printf( "Informe um n�mero inteiro positivo." );
		scanf_s( "%d", &num );
		//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		if (num < 0)
			printf( "N�mero inv�lido\n." );
		else
			if (num > 0){
				if (num > maior)
					maior = num;
				if (num < menor)
					menor = num;
			}
	} while (num != 0);

	printf( "O maior valor digitado � %d e o menor � %d.\n ", maior, menor );
	system( "pause" );
	return 0;
}
