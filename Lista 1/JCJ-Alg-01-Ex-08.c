// -*- coding: utf-8 -*-
#include <stdio.h>

	int main() {
		unsigned int bugigangas, quinquilharias;
		printf("Informe a quantidade de bugigangas: ");
		scanf("%u", &bugigangas);
		printf("Informe a quantidade de quinquilharias: ");
		scanf("%u", &quinquilharias);
		unsigned int peso_total = (bugigangas * 75) + (quinquilharias * 112);
		printf("O peso total das bugigangas e quinquilharias e %u gramas | %.2f KG", peso_total, peso_total / 1000.0);

		return 0;
}
