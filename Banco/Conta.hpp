#pragma once
#include <string>
#include <utility>
#include <variant>
#include "Titular.hpp"
#include "CPF.hpp"

namespace Conta
{
	template <int percentualTarifa>
	class Conta
	{
	private:
		static int numeroDeContas = 0;
		std::string numero;
		Titular::Titular titular;
	protected:
		float saldo;
	public:
		enum ResultadoSaque
		{
			Sucesso, ValorNegativo, SaldoInsuficiente
		};
		Conta(const std::string numero, Titular::Titular titular) :
			numero(numero),
			titular(titular),
			saldo(0)
		{
			numeroDeContas++;
		}
		virtual ~Conta()
		{
			numeroDeContas--;
		}
		std::variant<ResultadoSaque, float> sacar(const float& valorASacar)
		{
			float tarifaDeSaque = valorASacar * (float&)percentualTarifa/100.0;
			float valorDoSaque = valorASacar + tarifaDeSaque;
			if (valorASacar < 0)
			{
				std::cout << "Não pode sacar valor negativo" << std::endl;
				return ValorNegativo;
			}

			if (valorDoSaque > saldo)
			{
				std::cout << "Saldo insuficiente" << std::endl;
				return SaldoInsuficiente;
			}
			saldo -= valorDoSaque;

			return Sucesso;
		}

		void depositar(const float& valorADepositar)
		{
			if (valorADepositar < 0)
			{
				std::cout << "Não pode depositar valor negativo" << std::endl;
				return;
			}
			saldo += valorADepositar;
		}

		void operator+=(float valorADepositar)
		{
			depositar(valorADepositar);
		}

		void operator-=(float valorASacar)
		{
			sacar(valorASacar);
		}

		bool operator<(Conta& outra)
		{
			return this->saldo < outra.saldo;
		}
		std::string recuperaNumero() const
		{
			return numero;
		}std::string recuperaNomeTitular() const
		{
			return titular.recuperaNome();
		}

		CPF::CPF recuperaCPFTitular() const
		{
			return titular.recuperaCpf();
		}

		int recuperaNumeroDeContas()
		{
			return numeroDeContas;
		}
	};
}
