#include "Cpf.hpp"
#include <iostream>

Cpf::Cpf(std::string numero):
	numero(numero)
{
	//valida��o complexa de CPF
}

std::string Cpf::recuperaNumero()
{
	return numero;
}