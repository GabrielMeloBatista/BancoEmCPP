#include <iostream>
#include "Titular.h"

Titular::Titular(CPF cpf, const std::string& nome):
	cpf(cpf),
	nome(nome)
{
	verificaTamanhoDoNome();
}

std::string Titular::recuperaNome() const
{
	return nome;
}

std::string Titular::recuperaCpf() const
{
	return cpf.retornaCPF();
}

void Titular::verificaTamanhoDoNome()
{
	if (nome.size() < 5)
	{
		std::cout << "Nome Curto" << std::endl;
		exit(1);
	}
}