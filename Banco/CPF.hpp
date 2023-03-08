#pragma once
#include <string>
class CPF
{
private:
	std::string cpf;
	bool validarCPF();
public:
	CPF(const std::string cpf);
	std::string retornaCPF() const;
};

