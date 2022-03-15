#include <iostream>
#include <string>
#include <any>
#include "DiaDaSemana.hpp"
#include "Gerente.hpp"
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"

using namespace std;

void ExibeSaldo(const ContaCorrente& conta)
{
    cout << "O saldo da conta corrente é: " << conta.recuperaSaldo() << endl;
}

void ExibeSaldo(const ContaPoupanca& conta)
{
    cout << "O saldo da conta poupanca é: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(ContaCorrente& conta)
{
    std::variant<Conta<5>::ResultadoSaque, float> resultado = conta.sacar(200);
    if (auto saldo = std::get_if<float>(&resultado)) {
        cout << "Novo saldo da conta:" << *saldo << endl;
    }
}

void FazLogin(Autenticavel& alguem, string senha)
{
    if (alguem.autentica(senha)) {
        cout << "Login realizado com sucesso" << endl;
    }
    else {
        cout << "Senha inválida" << endl;
    }
}

ostream& operator<<(ostream& cout, const Conta<5>& conta)
{
    Pessoa titular = conta.titular;

    cout << "O titular da conta: " << titular.recuperaNome() << endl;
    cout << "O saldo da Conta Corrente: " << conta.recuperaSaldo() << endl;

    return cout;
}

ostream& operator<<(ostream& cout, const Conta<3>& conta)
{
    Pessoa titular = conta.titular;

    cout << "O titular da conta: " << titular.recuperaNome() << endl;
    cout << "O saldo da Conta Poupanca: " << conta.recuperaSaldo() << endl;

    return cout;
}

template<typename T>
T Menor(T a, T b)
{
    return a < b ? a : b;
}

int main()
{
    Titular titular(Cpf("123.456.789-10"), "Diego", "umasenha");
    Titular titular2(Cpf("333.333.333-33"), "TresTres", "tressenha");

    ContaPoupanca umaConta("123456", titular);
    (Conta<3>&) umaConta += 5000;

    ContaCorrente corrente("123456", titular2);
    (Conta<5>&)corrente += 10000;

    Titular outro(Cpf("098.765.432-10"), "Vanessa", "outrasenha");
    ContaCorrente umaOutraConta("654321", outro);
    (Conta<5>&)umaOutraConta += 300;

    ContaCorrente outraContaCorrente("546312", titular);

    outraContaCorrente += umaOutraConta;

    ExibeSaldo(corrente);
    ExibeSaldo(umaConta);
    ExibeSaldo(umaOutraConta);
    ExibeSaldo(outraContaCorrente);

    cout << "Numero de contas: " << Conta<3>::recuperaNumeroDeContas() << endl;
    cout << "Numero de contas: " << Conta<5>::recuperaNumeroDeContas() << endl;

    cout << umaConta << endl;
    cout << corrente << endl;
    cout << umaOutraConta << endl;

    Gerente umGerente(
        Cpf("000.000.000-00"),
        "Nome do Gerente",
        1500,
        DiaDaSemana::Terca,
        "123456"
    );

    return 0;
}