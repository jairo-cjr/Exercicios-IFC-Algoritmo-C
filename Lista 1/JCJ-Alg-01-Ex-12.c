// -*- coding: utf-8 -*-
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

	int main() {
		double raio;
		printf("Digite o raio: ");
		scanf("%lf", &raio);
		printf("Area: %.2lf\n", M_PI * pow(raio, 2));
		printf("Volume: %.2lf\n", (4.0 / 3.0) * M_PI * pow(raio, 3));
		return 0;
}
