#pragma once
#include <string>

namespace Autenticacao
{
	class Autenticavel
	{
	private:
		std::string senha;
	public:
		Autenticavel(std::string senha);
		bool verificaSenha(std::string senha) const;
	};
}