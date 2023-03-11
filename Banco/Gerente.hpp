#pragma once
#include <string>
#include "CPF.hpp"
#include "Funcionario.hpp"
#include "Autenticavel.hpp"
#include "DiaDaSemana.hpp"

namespace Gerente
{
	class Gerente final : Funcionario, Autenticacao::Autenticavel
	{
	public:
		Gerente(CPF::CPF cpf, std::string nome, float salario, std::string senha, DiaDaSemana diaPagamento);
		float bonificacao() const;
	};
}
