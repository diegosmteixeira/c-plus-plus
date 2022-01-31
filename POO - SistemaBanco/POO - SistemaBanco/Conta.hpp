#pragma once //essa instrução evita que o mesmo arquivo seja incluído várias vezes na mesma unidade de tradução
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