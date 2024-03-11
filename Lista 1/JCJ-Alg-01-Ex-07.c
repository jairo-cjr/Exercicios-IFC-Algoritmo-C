// -*- coding: utf-8 -*-
#include <stdio.h>

	int main() {
		unsigned int n;
		printf("Informe um numero inteiro positivo: ");
		scanf("%u", &n);
		unsigned int soma = (n * (n + 1)) / 2;
		printf("A soma dos %u primeiros numeros inteiros e %u", n, soma);
		return 0;
}
