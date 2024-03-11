// -*- coding: utf-8 -*-
#include <stdio.h>
#include <math.h>

	int main() {
		float a, b;;
		printf("Digite o valor de a: ");
		scanf("%f", &a);
		printf("Digite o valor de b: ");
		scanf("%f", &b);
		printf("A soma de a e b e %.2f\n", a + b);
		printf("A subtração de b por a e: %.2f\n", b - a);
		printf("A multiplicacao de a por b e: %.2f\n", a * b);
		printf("A divisao de a por b e: %.2f\n", a / b);
		printf("O logaritmo de a na base 10 e: %.2f\n", log10(a));
		printf("O quadrado de a e: %.2f\n", pow(a, b));



		return 0;
}
