// -*- coding: utf-8 -*-
#include <stdio.h>
#include <math.h>

double graus_para_radianos(double graus);

	int main() {
		double t1, g1, t2, g2;
		printf("Digite o valor de latitude 1: ");
		scanf("%lf", &t1);
		printf("Digite o valor de longitude 1: ");
		scanf("%lf", &g1);
		printf("Digite o valor de latitude 2: ");
		scanf("%lf", &t2);
		printf("Digite o valor de longitude 2: ");
		scanf("%lf", &g2);
		t1 = graus_para_radianos(t1);
		g1 = graus_para_radianos(g1);
		t2 = graus_para_radianos(t2);
		g2 = graus_para_radianos(g2);
		double distancia = 6371.01 * acos((sin(t1)*sin(t2)) + (cos(t1)*cos(t2 )) * cos(g1-g2));
		printf("A distancia entre os pontos e: %.2f Km\n", distancia);

		return 0;
}

double graus_para_radianos(double graus) {
	return (graus * 3.14159265358979323846) / 180;
}
