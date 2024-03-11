// -*- coding: utf-8 -*-
#include <stdio.h>

	int main() {
	printf("Informe a largura: ");
    float largura;
    scanf("%f", &largura);

    printf("Informe a profundidade: ");
    float profundidade;
    scanf("%f", &profundidade);

	printf("O terreno possui %.4f hectares", (largura * profundidade) / 10000);
    return 0;
}
