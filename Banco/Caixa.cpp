#include "Caixa.hpp"

Caixa::Caixa(CPF::CPF cpf, std::string nome, float salario)
	:Funcionario(cpf, nome, salario)
{
}

float Caixa::bonificacao() const
{
	return recupearSalario() * 0.1;
}
