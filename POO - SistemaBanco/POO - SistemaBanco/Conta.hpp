#pragma once //essa instru��o evita que o mesmo arquivo seja inclu�do v�rias vezes na mesma unidade de tradu��o
#include <string>

struct Conta
{
	std::string numero;
	std::string cpfTitular;
	std::string nomeTitular;
	float saldo;

	void sacar(float valorASacar);
	void depositar(float valorADepositar);
};