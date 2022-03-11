
//essa instru��o evita que o mesmo arquivo seja inclu�do v�rias vezes na mesma unidade de tradu��o
#pragma once 

#include <string>
#include "Titular.hpp"

class Conta
{
//atributos com 'static' pertencem a toda � classe e aos objetos instanciados (como se fosse global a todos os objetos)
private:
	static int numeroDeContas;

//m�todo static vis�vel pela classe e seus objetos instanciados
public:
	static int recuperaNumeroDeContas();

//atributos privados s�o acess�veis dentro da pr�pria classe
private:
	std::string numero;
	Titular titular;

//atributos protected s�o acess�veis pelas subclasses
protected:
	float saldo;

public:
	Conta(std::string numero, Titular titular);

	//m�todo destrutor chamado quando a vari�vel (objeto) deixa de existir (ele n�o � chamado explicitamente)
	virtual ~Conta();
	
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	virtual float taxaDeSaque() const = 0;
};