// -*- coding: utf-8 -*-
#include <stdio.h>
#include <math.h>

	int main() {
		double lado, lado_1, lado_2, lado_3;
		printf("Digite o valor do lado 1: ");
		scanf("%lf", &lado_1);
		printf("Digite o valor do lado 2: ");
		scanf("%lf", &lado_2);
		printf("Digite o valor do lado 3: ");
		scanf("%lf", &lado_3);
		lado = (lado_1 + lado_2 + lado_3) / 2;
		printf("Area: %.2lf\n", sqrt(lado * (lado - lado_1) * (lado - lado_2) * (lado - lado_3)));
		return 0;
}
