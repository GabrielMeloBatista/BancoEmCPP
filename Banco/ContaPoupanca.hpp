#pragma once
#include <string>
#include "Titular.hpp"
#include "Conta.hpp"

namespace Conta
{
	class ContaPoupanca final : public Conta<3>
	{
	public:
		ContaPoupanca(std::string numero, Titular::Titular titular);
	};
}
