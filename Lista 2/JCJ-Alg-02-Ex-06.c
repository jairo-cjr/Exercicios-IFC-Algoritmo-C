// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>
#include <stdlib.h>

int main(){

	int numero, milhar, centena, dezena, unidade;

	printf("Digite um numero inteiro de 4 digitos: ");
	scanf("%d", &numero);
	milhar = numero / 1000;
	centena = (numero % 1000) / 100;
	dezena = ((numero % 1000) % 100) / 10;
	unidade = (((numero % 1000) % 100) % 10) / 1;
	printf("A soma dos digitos do numero %d e: %d\n", numero, milhar + centena + dezena + unidade);
	return 0;
}
