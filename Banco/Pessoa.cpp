#include "Pessoa.hpp"
#include <iostream>
namespace Pessoa
{
	Pessoa::Pessoa(CPF::CPF cpf, std::string nome) :
		cpf(cpf), nome(nome)
	{
		verificaTamanhoDoNome();
		std::cout << "Construtor de Pessoa" << std::endl;
	}

	void Pessoa::verificaTamanhoDoNome()
	{
		if (nome.size() < 5)
		{
			std::cout << "Nome Curto" << std::endl;
			exit(1);
		}
	}

	std::string Pessoa::recuperaNome() const
	{
		return nome;
	}

	std::string Pessoa::recuperaCpf() const
	{
		return cpf.retornaCPF();
	}
}
