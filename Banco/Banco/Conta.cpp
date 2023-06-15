#include "Conta.h"

Conta::Conta()
{
	Banco = "";
	Agencia = { 0 };
	NConta = { 0 };
	Pessoa = "";
	Saldo = { 0 };
}

Conta::Conta(string Banco, int Agencia, int NConta, string Pessoa, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NConta = NConta;
	this->Pessoa = Pessoa;
	this->Saldo = Saldo;
}

Conta::~Conta()
{
	cout << "NÃO SEI OQ ISSO FAZ E O PQ DE EU USAR MAS TAQ.";
}

void Conta::setBanco(string Banco)
{
	this->Banco = Banco;
}

void Conta::setAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::setConta(int NConta)
{
	this->NConta = NConta;
}

void Conta::setPessoa(string Pessoa)
{
	this->Pessoa = Pessoa;
}

void Conta::setSaldo(double Saldo)
{
	this->Saldo = Saldo;
}
