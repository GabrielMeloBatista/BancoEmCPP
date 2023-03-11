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
		auto resultado = sacar(valor);
		if (resultado.index() == 1)
		{
			conta.depositar(valor);
		}
	}
	void ContaCorrente::operator+=(ContaCorrente& origem)
	{
		origem.transferePara(*this, origem.recuperaSaldo() / 2);
	}
}
