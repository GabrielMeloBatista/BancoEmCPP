#pragma once
#include <string>
#include <iostream>

namespace Pessoa
{
	template<typename Documento>
	class Pessoa
	{
	protected:
		Documento cpf;
		std::string nome;
	public:
		Pessoa(Documento cpf, std::string nome) :
			cpf(cpf), nome(nome)
		{
			verificaTamanhoDoNome();
			std::cout << "Construtor de Pessoa" << std::endl;
		}
	private:
		void verificaTamanhoDoNome()
		{
			if (nome.size() < 4)
			{
				std::cout << "Nome Muito Curto" << std::endl;
				exit(0);
			}
		}
	};
}

