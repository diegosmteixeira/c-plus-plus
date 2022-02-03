#pragma once
#include <string>

class Cpf
{
private:
	std::string numero;
public:
	//define que o construtor CPF é explícito e precisa ser chamado
	//não ocorrerá a conversão implícita
	explicit Cpf(std::string numero);
	std::string recuperaNumero();

};