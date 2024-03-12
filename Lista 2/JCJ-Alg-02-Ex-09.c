// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>
#include <stdlib.h>

int main(){

	int data, dia, mes, ano;

	printf("Digite uma data no formato DDMMAA: ");
	scanf("%d", &data);
	dia = data / 10000;
	mes = (data % 10000) / 100;
	ano = (data % 10000) % 100;
	printf("A data no formado AAMMDD e: %02d%02d%02d\n", ano, mes, dia);
	return 0;
}
