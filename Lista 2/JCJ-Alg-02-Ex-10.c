// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>
#include <stdlib.h>
/*
AASDDD, onde:
• os dois primeiros dígitos, representados pela letra A, são os dois últimos algarismos do ano
da matrícula;
• o terceiro dígitos, representado pela letra S, vale 1 ou 2, conforme o aluno tenha se
matriculado no 1o ou 2o semestre;
• os três últimos dígitos, representados pela letra D, correspondem à ordem da matrícula do
aluno, no semestre e no ano em questão.
Crie um programa Python que leia o número de matrícula de um aluno e imprima o ano e o
semestre em que ele foi matriculado. Por exemplo, um número de matrícula 182034 deve
resultar ano 18 e semestre 2.
*/
int main(){

	int ano, semestre, matricula;

	printf("Digite a matricula no formato AASDDD: ");
	scanf("%d", &matricula);
	ano = matricula / 10000;
	semestre = (matricula % 10000) / 1000;
	printf("Ano %d e semestre %d\n", ano, semestre);
	return 0;
}
