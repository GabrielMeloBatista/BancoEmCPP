#pragma once
#include <string>
#include "CPF.hpp"
#include "Funcionario.hpp"
#include "Autenticavel.hpp"

namespace Gerente
{
	class Gerente final : Funcionario, Autenticacao::Autenticavel
	{
	public:
		Gerente(CPF::CPF cpf, std::string nome, float salario, std::string senha);
		float bonificacao() const;
	};
}
