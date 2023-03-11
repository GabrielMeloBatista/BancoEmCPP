#pragma once
#include <string>
#include "Titular.hpp"
#include "Conta.hpp"
namespace Conta
{
	class ContaCorrente final : public Conta<5>
	{
	public:
		ContaCorrente(const std::string numero, Titular::Titular titular);
		void transferePara(Conta& conta, float valor);
		void operator+=(ContaCorrente& origem);
	};
}
