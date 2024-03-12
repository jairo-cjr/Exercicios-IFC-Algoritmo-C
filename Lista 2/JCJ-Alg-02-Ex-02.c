// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>

int main(){
	int dias, horas, minutos, segundos, total_segundos;
	printf("Digite a quantidade total de segundos: ");
	scanf("%d", &total_segundos);
	dias = total_segundos / 86400;
	horas = (total_segundos % 86400) / 3600;
	minutos = ((total_segundos % 86400) % 3600) / 60;
	segundos = ((total_segundos % 86400) % 3600) % 60;
	printf("%d segundos equivalem a %d dia(s) %dH%dmin%ds\n", total_segundos, dias, horas, minutos, segundos);
	return 0;
}
