// -*- coding: utf-8 -*-
#include <stdio.h>
#include <math.h>

	int main() {
		double base, altura;
		printf("Digite o valor da base: ");
		scanf("%lf", &base);
		printf("Digite o valor da altura: ");
		scanf("%lf", &altura);
		printf("Area: %.2lf\n", (base * altura) / 2);
		return 0;
}
