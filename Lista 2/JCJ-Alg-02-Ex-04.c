// Aluno: Jairo Caetano Junior
// Curso: Algoritmo - BCC - 1º Fase - 2024/01

#include <stdio.h>
#include <stdlib.h>

int main(){

	int a, b, c, min, max, mid;

	printf("Digite tres numeros inteiros: ");
	scanf("%d %d %d", &a, &b, &c);

	min = (b < c) * b + (c <= b) * c;
	min = (a < min) * a + (min <= a) * min;

	max = (b > c) * b + (c >= b) * c;
	max = (a > max) * a + (max >= a) * max;

	mid = (a + b + c )- min - max;
	printf("Os numeros em ordem crescente sao: %d %d %d\n", min, mid, max);
	return 0;
}
