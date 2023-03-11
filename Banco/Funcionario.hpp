#pragma once
#include <string>
#include "Pessoa.hpp"
#include "DiaDaSemana.hpp"
#include "CPF.hpp"

class Funcionario :public Pessoa::Pessoa<CPF::CPF>
{
private:
	float salario;
	DiaDaSemana diaPagamento;
public:
	Funcionario(CPF::CPF cpf, std::string nome, float salario, DiaDaSemana diaPagamento);
	virtual float bonificacao() const = 0;
	float recupearSalario() const;
};

