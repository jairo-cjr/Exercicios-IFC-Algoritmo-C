// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero, centena, dezena, unidade;

	printf("Digite um numero inteiro de 3 digitos: ");
	scanf("%d", &numero);
	centena = numero / 100;
	dezena = (numero  % 100) / 10;
	unidade = (numero % 10) / 1;
	printf("%d\n%d\n%d\n",centena, dezena, unidade);
	return 0;
}
