// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero, centena, dezena, unidade, M;

	printf("Digite um numero inteiro de 3 digitos: ");
	scanf("%d", &numero);
	centena = numero / 100;
	dezena = (numero  % 100) / 10;
	unidade = (numero % 10) / 1;
	M = (unidade * 100) + (dezena * 10) + centena;
	printf("O numero %d invertido e: %d\n", numero, M);
	return 0;
}
