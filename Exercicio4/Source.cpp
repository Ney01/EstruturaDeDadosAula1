/*
* Fazer um programa que receba e calcule o novo sal�rio de um funcion�rio 
* com base na seguinte regra: 
*	sal�rios at� R$ 723,00 reajuste de 12%; 
*	sal�rio de R$ 724,00 a R$ 893,00 reajuste de 11%; 
*	sal�rio de R$ 894,00 a R$ 1050,00 reajuste de 10%; 
*	sal�rio acima de R$ 1050,00 reajuste de 9%.
*/

#include <stdlib.h>
#include <stdio.h>

void main() {
	char nome[32] = {' '}, c =' ';
	float sal = 0.0;

	printf( "Informar nome do funcion�rio: " );
	scanf_s( "%s", &nome, sizeof(nome) );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf( "Informar o sal�rio do funcion�rio: " );
	scanf_s( "%f", &sal );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	if (sal <= 723)
		printf( "Novo sal�rio do funcion�rio %s � %f\n", nome, (sal * 1.12) );
	else
		if ((sal >= 724) && (sal <= 893))
			printf( "Novo sal�rio do funcion�rio %s � %f\n", nome, (sal * 1.11) );
		else
			if ((sal >= 894) && (sal <= 1050))
				printf( "Novo sal�rio do funcion�rio %s � %f\n", nome, (sal * 1.10) );
			else
				if (sal > 1050)
					printf( "Novo sal�rio do funcion�rio %s � %f\n", nome, (sal * 1.09) );
	system( "pause" );
}
