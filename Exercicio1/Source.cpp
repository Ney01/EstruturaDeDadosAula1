/*
* Criar um programa que receba as 4 notas de um aluno e 
* calcule e imprima a m�dia aritm�tica das notas. 
* O programa dever� tamb�m informar se o aluno esta aprovado ou reprovado, 
* lembrando que a m�dia de aprova��o � 7,0.
*/
#include <stdlib.h>
#include <stdio.h>

void main() {
	float n1 = 0.0 , n2 = 0.0, n3 = 0.0, n4 = 0.0, media = 0.0;
	int c = 0;

	printf( "Informar a 1� nota do aluno: " );
	scanf_s( "%f", &n1 );
	//sempre limpar o buffer de teclado se for usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf( "Informar a 2� nota do aluno: " );
	scanf_s( "%f", &n2 );
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf( "Informar a 3� nota do aluno: " );
	scanf_s( "%f", &n3 );
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf( "Informar a 4� nota do aluno: " );
	scanf_s( "%f", &n4 );
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	media = (n1 + n2 + n3 + n4) / 4;
	//vamos devolver a m�dia com duas casas decimais
	if (media >= 7)
		printf( "Aluno aprovado com m�dia %.2f\n", media );
	else
		printf( "Aluno reprovado com m�dia %.2f\n", media );
	
	system( "pause" );
}
