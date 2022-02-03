#pragma once
#include "Cpf.hpp"
#include <string>

class Titular
{
private:
	Cpf cpf;
	std::string nome;
public:
	Titular(Cpf cpf, std::string nome);

private:
	void verificaTamanhoDoNome();
};