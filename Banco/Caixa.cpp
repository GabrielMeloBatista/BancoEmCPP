#include "Caixa.hpp"

namespace Caixa {
	Caixa::Caixa(CPF::CPF cpf, std::string nome, float salario, DiaDaSemana diaPagamento)
		:Funcionario(cpf, nome, salario, diaPagamento)
	{
	}

	float Caixa::bonificacao() const
	{
		return recupearSalario() * 0.1;
	}
}
