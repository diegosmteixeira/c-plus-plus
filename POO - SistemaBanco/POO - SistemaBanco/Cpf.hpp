#pragma once
#include <string>

class Cpf
{
private:
	std::string numero;
public:
	//define que o construtor CPF � expl�cito e precisa ser chamado
	//n�o ocorrer� a convers�o impl�cita
	explicit Cpf(std::string numero);
	std::string recuperaNumero();

};