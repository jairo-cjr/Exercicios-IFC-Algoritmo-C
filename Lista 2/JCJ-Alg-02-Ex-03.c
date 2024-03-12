// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>
#include <time.h>

int main(){
	time_t tempo_atual;
	time(&tempo_atual);

	char *tempo_formatado = ctime(&tempo_atual);
	printf("%s", tempo_formatado);
	return 0;
}
