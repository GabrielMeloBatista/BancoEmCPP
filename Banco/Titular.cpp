#include <iostream>
#include "Titular.hpp"

namespace Titular 
{
	Titular::Titular(CPF::CPF cpf, std::string nome, std::string senha) :
		Pessoa::Pessoa(cpf, nome), Autenticacao::Autenticavel(senha)
	{
	}
}