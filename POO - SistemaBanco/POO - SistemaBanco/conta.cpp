#include "Conta.hpp"
#include <iostream>

void Conta::sacar(float valorASacar)
{
	if (valorASacar < 0)
	{
		std::cout << "Especifique um valor v�lido." << std::endl;
		return;
	}

	if (valorASacar > saldo)
	{
		std::cout << "N�o � poss�vel sacar.Saldo insuficiente" << std::endl;
		return;
	}

	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0)
	{
		std::cout << "Especifique um valor v�lido." << std::endl;
		return;
	}

	saldo += valorADepositar;
}