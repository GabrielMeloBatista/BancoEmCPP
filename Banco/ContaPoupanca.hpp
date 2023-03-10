#pragma once
#include <string>
#include "Titular.hpp"
#include "Conta.hpp"

namespace Conta
{
	class ContaPoupanca final : public Conta
	{
	public:
		ContaPoupanca(std::string numero, Titular::Titular titular);
		float taxaDeSaque() const override;
	};
}
