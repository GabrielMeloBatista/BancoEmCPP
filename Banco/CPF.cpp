#include "CPF.hpp"
#include <iostream>
#include <string>

namespace CPF
{
	bool CPF::validarCPF()
	{
		// Remove os caracteres n�o-num�ricos da string
		std::string temp = "";
		for (char c : cpf) {
			if (isdigit(c)) {
				temp += c;
			}
		}
		// Atribui a string limpa � vari�vel original
		cpf = temp;

		// Verifica se a string est� vazia ou tem tamanho diferente de 11
		if (cpf == "" || cpf.length() != 11) {
			return false;
		}

		// Verifica se a string � formada por d�gitos repetidos
		std::string repetidos[] = { "00000000000","11111111111","22222222222","33333333333","44444444444","55555555555","66666666666","77777777777","88888888888","99999999999" };

		for (std::string s : repetidos) {
			if (cpf == s) {
				return false;
			}
		}

		// Calcula o primeiro d�gito verificador
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
		// Verifica se o primeiro d�gito verificador � igual ao d�cimo d�gito da string
		if (resto != int(cpf[9] - '0')) {
			return false;
		}

		// Calcula o segundo d�gito verificador
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

		// Verifica se o segundo d�gito verificador � igual ao d�cimo primeiro d�gito da string
		if (resto != int(cpf[10] - '0')) {
			return false;
		}

		// Se chegou at� aqui, a string � um CPF v�lido
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
