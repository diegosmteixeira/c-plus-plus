#include "Conta.hpp"
#include <iostream>

/*
Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular)
{
	this->numero = numero;
	this->nomeTitular = nomeTitular;
	this->cpfTitular = cpfTitular;
	this->saldo = 0;
}
*/

//inicialização da variável estática
int Conta::numeroDeContas = 0;

//Lista de Inicialização (Synthax Suggar?) - Deixa o código mais rápido pois evita que haja inicialização de string com o this->
Conta::Conta(std::string numero, Titular titular):
	numero(numero),
	titular(titular),
	saldo(0)
{
	numeroDeContas++;
}

//método destrutor para diminuir o número de contas sempre que um objeto deixar de existir
//Quando uma instância deixa de existir, seu método destrutor é executado automaticamente
Conta::~Conta()
{
	numeroDeContas--;
}

void Conta::sacar(float valorASacar)
{
	if (valorASacar < 0)
	{
		std::cout << "Especifique um valor válido." << std::endl;
		return;
	}

	if (valorASacar > saldo)
	{
		std::cout << "Não é possível sacar.Saldo insuficiente" << std::endl;
		return;
	}

	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0)
	{
		std::cout << "Especifique um valor válido." << std::endl;
		return;
	}

	saldo += valorADepositar;
}

float Conta::recuperaSaldo() const
{
	return saldo;
}

int Conta::recuperaNumeroDeContas()
{
	return numeroDeContas;
}
