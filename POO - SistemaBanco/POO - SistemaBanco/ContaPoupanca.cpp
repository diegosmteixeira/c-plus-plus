#include "ContaPoupanca.hpp"
#include <iostream>

int Conta<3>::numeroDeContas;

int Conta<3>::recuperaNumeroDeContas()
{
    return numeroDeContas;
}

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) : Conta(numero, titular)
{
}