#pragma once
#include <string>
#include "CPF.hpp"

class Titular
{
private:
	CPF cpf;
	std::string nome;
	void verificaTamanhoDoNome();

public:
	Titular(CPF cpf, const std::string& nome);
	std::string recuperaNome() const;
	std::string recuperaCpf() const;
};

