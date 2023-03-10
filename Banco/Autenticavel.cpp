#include "Autenticavel.hpp"

namespace Autenticacao
{
	Autenticavel::Autenticavel(std::string senha) : senha(senha)
	{
	}

	bool Autenticavel::verificaSenha(std::string senha) const
	{
		return senha == this->senha;
	}
}
