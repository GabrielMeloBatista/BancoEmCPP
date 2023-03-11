#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(CPF::CPF cpf, std::string nome, float salario, DiaDaSemana diaPagamento) :
	Pessoa(cpf, nome), salario(salario), diaPagamento(diaPagamento)
{
	std::cout << "Construtor de Funcionario" << std::endl;
}

float Funcionario::recupearSalario() const
{
	return salario;
}
