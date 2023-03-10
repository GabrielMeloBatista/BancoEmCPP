#pragma once
#include <string>
#include "Titular.hpp"
#include "Conta.hpp"
namespace Conta
{
	class ContaCorrente final : public Conta
	{
	public:
		ContaCorrente(const std::string numero, Titular::Titular titular);
		float taxaDeSaque() const override;
		void transferePara(Conta& conta, float valor);
	};
}
