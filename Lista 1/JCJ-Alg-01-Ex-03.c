// -*- coding: utf-8 -*-
#include <stdio.h>

	int main() {
    printf("Informe a largura: ");
    float largura;
    scanf("%f", &largura);

    printf("Informe a profundidade: ");
    float profundidade;
    scanf("%f", &profundidade);

    printf("A area da sala e de: %.2f\n", largura * profundidade);

    return 0;
}
