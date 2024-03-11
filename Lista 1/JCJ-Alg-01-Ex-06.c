// -*- coding: utf-8 -*-
#include <stdio.h>

	int main() {
		float suco, prato, sobremesa, total;
		printf("Informe o valor do suco: ");
		scanf("%f", &suco);
		printf("Informe o valor do prato: ");
		scanf("%f", &prato);
		printf("Informe o valor da sobremesa: ");
		scanf("%f", &sobremesa);
		total = suco + prato + sobremesa +((suco + prato + sobremesa) * 0.10);
		printf("O valor total da conta e R$ %.2f", total);
    return 0;
}
