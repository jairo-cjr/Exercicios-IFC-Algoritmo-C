// -*- coding: utf-8 -*-
#include <stdio.h>
#include <math.h>

	int main() {
		float dinheiro;;
		printf("Informe a quantia de dinheiro de entrada: ");
		scanf("%f", &dinheiro);
		printf("A quantia de dinheiro de entrada foi de R$ %.2f\n", dinheiro * pow(1 + 0.12, 1));
		printf("A quantia de dinheiro de entrada foi de R$ %.2f\n", dinheiro * pow(1 + 0.12, 2));
		printf("A quantia de dinheiro de entrada foi de R$ %.2f\n", dinheiro * pow(1 + 0.12, 3));



		return 0;
}
