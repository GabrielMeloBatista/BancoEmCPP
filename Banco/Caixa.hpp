#pragma once
#include "Funcionario.hpp"
#include <string>
#include "CPF.hpp"
#include "DiaDaSemana.hpp"

namespace Caixa
{
	class Caixa final : public Funcionario
	{
	public:
		Caixa(CPF::CPF cpf, std::string nome, float salario, DiaDaSemana diaPagamento);
		float bonificacao() const;
	};
}

