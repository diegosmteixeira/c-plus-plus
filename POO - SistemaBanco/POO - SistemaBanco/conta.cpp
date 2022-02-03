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

//inicializa��o da vari�vel est�tica
int Conta::numeroDeContas = 0;

//Lista de Inicializa��o (Synthax Suggar?) - Deixa o c�digo mais r�pido pois evita que haja inicializa��o de string com o this->
Conta::Conta(std::string numero, Titular titular):
	numero(numero),
	titular(titular),
	saldo(0)
{
	numeroDeContas++;
}

//m�todo destrutor para diminuir o n�mero de contas sempre que um objeto deixar de existir
//Quando uma inst�ncia deixa de existir, seu m�todo destrutor � executado automaticamente
Conta::~Conta()
{
	numeroDeContas--;
}

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

float Conta::recuperaSaldo() const
{
	return saldo;
}

int Conta::recuperaNumeroDeContas()
{
	return numeroDeContas;
}
