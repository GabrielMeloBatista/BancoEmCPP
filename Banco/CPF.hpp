#pragma once
#include <string>

namespace CPF
{
	class CPF
	{
	private:
		std::string cpf;
		bool validarCPF();
	public:
		CPF(const std::string cpf);
		std::string retornaCPF() const;
	};
}

