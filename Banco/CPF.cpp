#include "CPF.hpp"

bool CPF::validarCPF()
{
    return true;
}

CPF::CPF(const std::string cpf):
    cpf(cpf)
{
    if (!validarCPF())
    {
        exit(1);
    }
}

std::string CPF::retornaCPF() const
{
    return cpf;
}
