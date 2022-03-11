
//essa instrução evita que o mesmo arquivo seja incluído várias vezes na mesma unidade de tradução
#pragma once 

#include <string>
#include "Titular.hpp"

class Conta
{
//atributos com 'static' pertencem a toda à classe e aos objetos instanciados (como se fosse global a todos os objetos)
private:
	static int numeroDeContas;

//método static visível pela classe e seus objetos instanciados
public:
	static int recuperaNumeroDeContas();

//atributos privados são acessíveis dentro da própria classe
private:
	std::string numero;
	Titular titular;

//atributos protected são acessíveis pelas subclasses
protected:
	float saldo;

public:
	Conta(std::string numero, Titular titular);

	//método destrutor chamado quando a variável (objeto) deixa de existir (ele não é chamado explicitamente)
	virtual ~Conta();
	
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	virtual float taxaDeSaque() const = 0;
};