/*
* Uma empresa decide dar um aumento de 22% aos funcion�rios 
* cujo sal�rio seja igual ou inferior a R$ 823,00. 
* Criar um programa que receba o nome e o sal�rio do funcion�rio e 
* informe se este funcion�rio vai ter reajuste ou n�o e o 
* valor do sal�rio reajustado.
*/

#include <stdlib.h>
#include <stdio.h>

void main() {
	float sal = 0.0;
	char nome[45] = {' '}, c = ' ';

	printf( "Informar nome do funcion�rio: " );
	scanf_s( "%s", &nome, sizeof(nome) );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf( "Informar o sal�rio do funcion�rio: " );
	scanf_s( "%f", &sal );
	while ((c = getchar()) != '\n' && c != EOF) {}

	//vamos mostrar o novo salario com duas casas decimais
	if (sal <= 823.00)
		printf( "O funcion�rio %s ter� um reajuste, o novo sal�rio:  %.2f\n", nome, (sal * 1.22) );
	else
		printf( "O funcion�rio %s n�o ter� reajuste de sal�rio.\n", nome );
	
	system( "pause" );
}
