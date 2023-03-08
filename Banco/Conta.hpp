#pragma once
#include <string>
#include "Titular.h"

class Conta
{
private:
	static int numeroDeContas;
	std::string numero;
	Titular titular;
	float saldo;
public:
	Conta(const std::string& numero, Titular titular);
	Conta(const std::string& numero, Titular& titular);
	~Conta();
	void sacar(const float& valorASacar);
	void depositar(const float& valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNumero() const;
	std::string recuperaNomeTitular() const;
	std::string recuperaCPFTitular() const;
	static int recuperaNumeroDeContas();
};