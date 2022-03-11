#include "ContaPoupanca.hpp"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) : Conta(numero, titular)
{
}

float ContaPoupanca::taxaDeSaque() const
{
    std::cout << "Chamando metodo sacar() da conta poupanca" << std::endl;

    return 0.03;
}