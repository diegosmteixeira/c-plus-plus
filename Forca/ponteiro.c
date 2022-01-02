#include <stdio.h>

//int* diz ao compilador que vem um endereço de memória de um inteiro (e não um inteiro)
void calcula(int* c2) {
	//printf("calcula %d %d", c, &c);
	printf("calcula %d %d\n", (*c2), c2);

	//(*c2) entra no valor de dentro do endereço de memória e incrementa mais um
	(*c2)++;
	printf("calcula %d %d\n", (*c2), c2);
}

int main() {
	int c = 10;

	//o & da o endereço de memória da variável
	//no printf c imprime o valor da variável e &c imprime o endereço na memória
	printf("main %d %d\n", c, &c);
	calcula(&c);
	printf("main %d %d\n", c, &c);
}