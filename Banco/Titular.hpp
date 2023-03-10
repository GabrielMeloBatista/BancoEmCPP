#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Autenticavel.hpp"
#include "CPF.hpp"

namespace Titular
{
	class Titular :public Pessoa::Pessoa, Autenticacao::Autenticavel
	{
	public:
		Titular(CPF::CPF cpf, std::string nome, std::string senha);
	};
}

