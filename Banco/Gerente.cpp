#include "Gerente.hpp"

namespace Gerente {
	Gerente::Gerente(CPF::CPF cpf, std::string nome, float salario, std::string senha, DiaDaSemana diaPagamento) :
		Funcionario(cpf, nome, salario, diaPagamento), Autenticacao::Autenticavel(senha)
	{
	}

	float Gerente::bonificacao() const
	{
		return recupearSalario() * 0.5;
	}
}