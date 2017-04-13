/*
* Fazer um programa para verificar se uma senha digitada por um usu�rio � v�lida ou n�o. 
* A senha padr�o deve ser �abcxyz�. O programa deve informar se a senha � n�o v�lida.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main() {
	char senha[32] = {' '};

	printf( "Informar a senha: " );
	//precisamos indicar o tamanho do string que ser� copiado
	scanf_s( "%s", &senha, sizeof(senha) );
	//para comparar vamos utilizar uma fun��o da biblioteca
	//string.h a fun��o strcmp que devolve: 
	// um n�mero >0 se str2 > str1
	// um n�mero <0 se str2 < str1
	// zero se str1 == str2
	if (strcmp( senha, "abcxyz" ) == 0)
		printf( "Senha Correta.\n" );
	else
		printf( "Senha Incorreta\n" );
	system( "pause" );
}
