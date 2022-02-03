#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp" 

using namespace std;

int main()
{
	Titular titular(Cpf("123.456.789-13"), "Diego");
	Conta primeiraConta("11111", titular);

	Titular titular2(Cpf("789.456.789-13"), "Vanessa");
	Conta umaConta("123456", titular2);
	umaConta.depositar(500);
	

	cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	cout << "Uma conta: " << umaConta.recuperaSaldo() << endl;
	return 0;
}