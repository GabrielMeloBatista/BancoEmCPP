#include <iostream>
#include "Conta.hpp"

namespace Conta
{
	int Conta::numeroDeContas = 0;

	Conta::~Conta()
	{
		numeroDeContas--;
	}

	Conta::Conta(const std::string numero, Titular::Titular titular) :
		numero(numero),
		titular(titular),
		saldo(0)
	{
		numeroDeContas++;
	}

	void Conta::sacar(const float& valorASacar)
	{
		float tarifaDeSaque = valorASacar * taxaDeSaque();
		float valorDoSaque = valorASacar + tarifaDeSaque;
		if (valorASacar < 0)
		{
			std::cout << "Não pode sacar valor negativo" << std::endl;
			return;
		}

		if (valorDoSaque > saldo)
		{
			std::cout << "Saldo insuficiente" << std::endl;
			return;
		}
		saldo -= valorDoSaque;
	}

	void Conta::depositar(const float& valorADepositar)
	{
		if (valorADepositar < 0)
		{
			std::cout << "Não pode depositar valor negativo" << std::endl;
			return;
		}
		saldo += valorADepositar;
	}

	float Conta::recuperaSaldo() const
	{
		return saldo;
	}

	std::string Conta::recuperaNumero() const
	{
		return numero;
	}

	std::string Conta::recuperaCPFTitular() const
	{
		return titular.recuperaCpf();
	}

	int Conta::recuperaNumeroDeContas()
	{
		return numeroDeContas;
	}

	std::string Conta::recuperaNomeTitular() const
	{
		return titular.recuperaNome();
	}
}
