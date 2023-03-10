#pragma once
#include "Funcionario.hpp"
#include <string>
#include "CPF.hpp"

class Caixa final : public Funcionario
{
public:
	Caixa(CPF::CPF cpf, std::string nome, float salario);
	float bonificacao() const;
};

