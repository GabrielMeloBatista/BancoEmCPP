#pragma once
#include <string>
#include "Titular.hpp"

namespace Conta
{
	class Conta
	{
	private:
		static int numeroDeContas;
		std::string numero;
		Titular::Titular titular;
	protected:
		float saldo;
	public:
		Conta(const std::string numero, Titular::Titular titular);
		virtual ~Conta();
		void sacar(const float& valorASacar);
		void depositar(const float& valorADepositar);
		float recuperaSaldo() const;
		std::string recuperaNumero() const;
		std::string recuperaNomeTitular() const;
		std::string recuperaCPFTitular() const;
		static int recuperaNumeroDeContas();
		virtual float taxaDeSaque() const = 0;
	};
}
