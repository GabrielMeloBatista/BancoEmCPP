#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(CPF::CPF cpf, std::string nome, float salario) :
	Pessoa(cpf, nome), salario(salario)
{
	std::cout << "Construtor de Funcionario" << std::endl;
}

float Funcionario::recupearSalario() const
{
	return salario;
}
