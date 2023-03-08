#include <iostream>
#include "Conta.hpp"
#include "Titular.h"
#include "CPF.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
	cout << "O Saldo da conta de " << conta.recuperaNomeTitular();
	cout << " é de R$" << conta.recuperaSaldo() << endl;
}

int main()
{
	Conta umaConta("13", Titular(CPF("123.456.789-10"), "Viniccius13"));
	Conta umaOutraConta("14", Titular(CPF("123.456.789-14"), "Viniccius14"));

	umaConta.depositar(500.00);
	umaConta.sacar(200.00);

	ExibeSaldo(umaConta);

	umaOutraConta.depositar(500.00);
	umaOutraConta.sacar(300.00);

	ExibeSaldo(umaOutraConta);

	cout << "Numero de Contas: " << Conta::recuperaNumeroDeContas() << endl;

	return 0;
}