#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string numero):
	numero(numero)
{
	//validação complexa de CPF
}

std::string Cpf::recuperaNumero()
{
	return numero;
}