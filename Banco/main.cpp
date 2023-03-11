#include <iostream>
#include <utility>
#include <optional>
#include <array>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "CPF.hpp"
#include "Funcionario.hpp"
#include "Caixa.hpp"
#include "Gerente.hpp"
#include "DiaDaSemana.hpp"

using namespace std;

void ExibeSaldo(const Conta::Conta& conta)
{
	cout << "O Saldo da conta de " << conta.recuperaNomeTitular();
	cout << " é de R$" << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta::Conta& conta, float valorSaque)
{
	auto resultado = conta.sacar(200);
	if (auto saldo = std::get_if<float>(&resultado))
		cout << "Novo Saldo da conta: " << saldo << endl;
}

void fazLogin(const Autenticacao::Autenticavel& alguem, const string senha)
{
	if (alguem.verificaSenha(senha))
	{
		cout << "Autenticado com sucesso" << endl;
	}
	else
	{
		cout << "Senha Invalida!!" << endl;
	}
}

ostream& operator<<(ostream& cout, const Conta::Conta& conta)
{
	cout << "O Saldo da conta de " << conta.recuperaNomeTitular();
	cout << " é de R$" << conta.recuperaSaldo() << endl;
	return cout;
}

template<typename MeuTipo> MeuTipo& Menor(MeuTipo& a, MeuTipo& b)
{
	return a < b ? a : b;
}

int main()
{
	Titular::Titular vinnicius13(CPF::CPF("123.456.789-10"), "Viniccius13", "umaSenha");
	Conta::ContaPoupanca umaConta("13", vinnicius13);
	Conta::ContaCorrente umaOutraConta("14", Titular::Titular(CPF::CPF("123.456.789-14"), "Viniccius14", "outraSenha"));
	Conta::ContaCorrente umaOutraContaCorrente("546312", vinnicius13);
	int a = 1, b = 2;
	float c = 1.5, d = 2.5;

	umaConta += 500.00;

	umaOutraConta.depositar(300);
	(Conta::Conta&)umaOutraConta += 300;
	umaOutraConta.transferePara(umaConta, 250);

	umaOutraContaCorrente += umaOutraConta;

	cout << Menor(a, b);
	cout << Menor(c, d);
	cout << Menor<Conta::Conta&>(umaOutraConta, umaConta);

	cout << "Numero de Contas: " << Conta::Conta::recuperaNumeroDeContas() << endl;

	Gerente::Gerente umGerente(CPF::CPF("000.000.000-00"), "Nome do Gerente", 1500, "123456", DiaDaSemana::Terça);

	array

	return 0;
}