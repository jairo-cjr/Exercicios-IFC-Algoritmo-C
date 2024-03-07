// -*- coding: utf-8 -*-
#include <stdio.h>

	int main() {
    printf("Informe a largura: ");
    float largura;
    scanf("%f", &largura);

    printf("Informe a profundidade: ");
    float profundidade;
    scanf("%f", &profundidade);

    printf("A área da sala é de: %.2f\n", largura * profundidade);

    return 0;
}
