#pragma once
#include "CPF.hpp"
#include <string>


namespace Pessoa
{
	class Pessoa
	{
	protected:
		CPF::CPF cpf;
		std::string nome;
	public:
		Pessoa(CPF::CPF cpf, std::string nome);
		std::string recuperaNome() const;
		std::string recuperaCpf() const;
	private:
		void verificaTamanhoDoNome();
	};
}

