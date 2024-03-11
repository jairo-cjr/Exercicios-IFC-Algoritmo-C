// -*- coding: utf-8 -*-
#include <stdio.h>

	int main() {
		int vasilhames_1_L, vasilhames_mais_1_L;
		float credito;
		printf("Informe a quantidade de vasilhames de 1 litro ou menos: ");
		scanf("%d", &vasilhames_1_L);
		printf("Informe a quantidade de vasilhames de mais de 1 litro: ");
		scanf("%d", &vasilhames_mais_1_L);
		credito = (vasilhames_1_L * 0.10) + (vasilhames_mais_1_L * 0.25);
		printf("O valor total dos creditos e R$ %.2f", credito);
    return 0;
}
