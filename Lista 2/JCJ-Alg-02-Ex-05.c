// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>
#include <stdlib.h>

int main(){

	int centavos, cents_50, cents_25, cents_10, cents_5, cents_1;

	printf("Digite a quantidade em centavos: ");
	scanf("%d", &centavos);

	cents_50 = centavos / 50;
	cents_25 = (centavos % 50) / 25;
	cents_10 = ((centavos % 50) % 25) / 10;
	cents_5 = (((centavos % 50) % 25) % 10) / 5;
	cents_1 = ((((centavos % 50) % 25) % 10) % 5) / 1;
	printf("Serao necessarias:\n%d moedas de 50 centavos\n%d moedas de 25 centavos\n%d moedas de 10 centavos\n%d moedas de 5 centavos\n%d moedas de 1 centavo.",cents_50,cents_25, cents_10, cents_5, cents_1);

	return 0;
}
