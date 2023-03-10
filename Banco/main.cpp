#include <iostream>
#include "Conta.hpp"
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "Titular.hpp"
#include "CPF.hpp"
#include "Funcionario.hpp"
#include "Caixa.hpp"
#include "Gerente.hpp"

using namespace std;

void ExibeSaldo(const Conta::Conta& conta)
{
	cout << "O Saldo da conta de " << conta.recuperaNomeTitular();
	cout << " é de R$" << conta.recuperaSaldo() << endl;
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

int main()
{
	Titular::Titular vinnicius13(CPF::CPF("123.456.789-10"), "Viniccius13", "umaSenha");
	Conta::ContaPoupanca umaConta("13", vinnicius13);
	Conta::ContaCorrente umaOutraConta("14", Titular::Titular(CPF::CPF("123.456.789-14"), "Viniccius14", "outraSenha"));
	Conta::ContaCorrente umaOutraContaCorrente("546312", vinnicius13);

	umaConta.depositar(500.00);
	umaConta.sacar(200.00);

	ExibeSaldo(umaConta);

	umaOutraConta.depositar(300.00);
	umaOutraConta.transferePara(umaConta, 250);

	umaOutraConta.transferePara(umaOutraContaCorrente, 250);

	ExibeSaldo(umaOutraConta);
	ExibeSaldo(umaOutraContaCorrente);

	cout << "Numero de Contas: " << Conta::Conta::recuperaNumeroDeContas() << endl;

	return 0;
}