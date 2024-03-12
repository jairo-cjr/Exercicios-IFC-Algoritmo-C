// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>

int main(){
	int dias, horas, minutos, segundos, total_segundos;
	printf("Digite a quantidade de dias: ");
	scanf("%d", &dias);
	printf("Digite as horas, minutos e segundos no formato HH:MM:SS: ");
	scanf("%d:%d:%d", &horas, &minutos, &segundos);
	total_segundos = (dias * 86400) + (horas * 3600) + (minutos * 60) + segundos;
	printf("O total de segundos e: %d\n", total_segundos);
	return 0;
}
