#pragma once
#include <string>
#include "Pessoa.hpp"

class Funcionario :public Pessoa::Pessoa
{
private:
	float salario;
public:
	Funcionario(CPF::CPF cpf, std::string nome, float salario);
	virtual float bonificacao() const = 0;
	float recupearSalario() const;
};

