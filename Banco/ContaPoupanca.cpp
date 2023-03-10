#include "ContaPoupanca.hpp"
#include <iostream>

namespace Conta
{
	ContaPoupanca::ContaPoupanca(std::string numero, Titular::Titular titular) :
		Conta(numero, titular)
	{
	}

	float ContaPoupanca::taxaDeSaque() const
	{
		return 0.03f;
	}
}

