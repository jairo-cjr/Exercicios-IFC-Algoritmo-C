// -*- coding: utf-8 -*-
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

	int main() {
		int n;
		double lado;
		printf("Digite o numero de lados: ");
		scanf("%d", &n);
		printf("Digite o comprimento de cada lado: ");
		scanf("%lf", &lado);
		printf("Area: %.2lf\n", (n * pow(lado, 2)) / (4 * tan(M_PI / n)));

		return 0;
}
