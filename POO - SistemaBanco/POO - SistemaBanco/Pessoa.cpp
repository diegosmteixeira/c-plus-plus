#include <iostream>
#include "Pessoa.hpp"

Pessoa::Pessoa(Cpf cpf, std::string nome): 
	cpf(cpf), nome(nome)
{
}

void Pessoa::verificaTamanhoDoNome()
{
	if (nome.size() < 5)
	{
		std::cout << "Nome muito curto: " << nome << std::endl;
		exit(1);
	}
}