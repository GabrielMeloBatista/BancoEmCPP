#include "ContaCorrente.hpp"

namespace Conta
{
	ContaCorrente::ContaCorrente(const std::string numero, Titular::Titular titular)
		:Conta(numero, titular)
	{
	}

	float ContaCorrente::taxaDeSaque() const
	{
		return 0.05f;
	}

	void ContaCorrente::transferePara(Conta& conta, float valor)
	{
		sacar(valor);
		conta.depositar(valor);
	}
}
