#include "CPF.hpp"
#include <iostream>
#include <string>

namespace CPF
{
	bool CPF::validarCPF()
	{
		// Remove os caracteres não-numéricos da string
		std::string temp = "";
		for (char c : cpf) {
			if (isdigit(c)) {
				temp += c;
			}
		}
		// Atribui a string limpa à variável original
		cpf = temp;

		// Verifica se a string está vazia ou tem tamanho diferente de 11
		if (cpf == "" || cpf.length() != 11) {
			return false;
		}

		// Verifica se a string é formada por dígitos repetidos
		std::string repetidos[] = { "00000000000","11111111111","22222222222","33333333333","44444444444","55555555555","66666666666","77777777777","88888888888","99999999999" };

		for (std::string s : repetidos) {
			if (cpf == s) {
				return false;
			}
		}

		// Calcula o primeiro dígito verificador
		int soma = 0; for (int i = 0; i < 9; i++) {
			soma += int(cpf[i] - '0') * (10 - i);
		}
		int resto = soma % 11;
		if (resto < 2) {
			resto = 0;
		}
		else {
			resto = 11 - resto;
		}
		// Verifica se o primeiro dígito verificador é igual ao décimo dígito da string
		if (resto != int(cpf[9] - '0')) {
			return false;
		}

		// Calcula o segundo dígito verificador
		soma = 0;
		for (int i = 0; i < 10; i++) {
			soma += int(cpf[i] - '0') * (11 - i);
		}
		resto = soma % 11;
		if (resto < 2) {
			resto = 0;
		}
		else {
			resto = 11 - resto;
		}

		// Verifica se o segundo dígito verificador é igual ao décimo primeiro dígito da string
		if (resto != int(cpf[10] - '0')) {
			return false;
		}

		// Se chegou até aqui, a string é um CPF válido
		return true;
	}

	CPF::CPF(const std::string cpf) :
		cpf(cpf)
	{
		//if (!validarCPF())
		//{
		//	exit(1);
		//}
	}

	std::string CPF::retornaCPF() const
	{
		return cpf;
	}
}
